#include "iostream"
#include "stdio.h"

using namespace std;
int divisor(int a , int b);
int main (){
    int a=10, b=5;
     divisor(a,b);
    return 0;
};

int divisor(int a, int b){
    int result=0;
    if (a>b){
        result = result + (a/b);
    }else 
    result += (a%b);
    return result;
}

