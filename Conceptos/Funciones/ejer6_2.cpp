#include "iostream"
#include "stdio.h"

using namespace std;

void logica(int a, int b);
int main (){
    int a=10, b=3;
    logica(a,b);

    return 0;
};
void logica ( int a, int b){
    if (a%b ==0 || b%a==0){
        cout<<" true";
    }else 
    cout<<" false";
}

