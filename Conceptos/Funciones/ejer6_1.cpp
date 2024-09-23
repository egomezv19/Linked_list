#include "iostream"
#include "stdio.h"

using namespace std;
int tipoDato(int a);
int main (){
    
    int num;cin>>num;
    tipoDato(num);
    return 0;
};
int tipoDato (int a){
    
    if (a>0){
        cout<<"P";
    }else if (a==0){
        cout<<"es cero";
    }else if (a<0){
        cout<<"es negativo";
    }
}
