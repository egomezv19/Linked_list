class BrowserHistory {
    // falta entender :C
public:
    stack<string> stack1;
    stack<string> stack2;

    BrowserHistory(string homepage) {
        stack1.push(homepage);
    }
    
    void visit(string url) {
        stack1.push(url);
        while(!stack2.empty()){
            stack2.pop();
        }
    }
    
    string back(int steps) {
        while(stack1.size()!=1 && steps>0){
            stack2.push(stack1.top());
            stack1.pop();
            steps--;
        }
        return stack1.top();
    }
    
    string forward(int steps) {
        while (stack2.empty()==false && steps>0){
            stack1.push(stack2.top());
            stack2.pop();
            steps--;
        
        }
        return stack1.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */