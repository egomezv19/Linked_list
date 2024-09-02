#include <vector>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
// falta template de vector??
class Solution{
    public :
        vector<int> twoSum(vector<int>& nums, int target){
            vector<int> ret;
            int size =  nums.size();
            for (int i = 0; i<size-1;i++){ // primer bucle para atrapar el primer valor 
                for (int j = i+1; j<size ; j++){ // segundo bucle para recorrer los demas numeros, asegurarse de comenzar en el elemento siguiente 
                if (nums[i] + nums[j] == target) {// si el valor de i + j = target, retornamos esos valores a ret
                    ret.push_back(i);
                    ret.push_back(j);
                     return ret; // porque dentro??
                } 
               
            }
    } 
    return ret;

}   
};