#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
    int num;
    int positivo=0,negativo=0,cero=0;
    for (int i = 0; i<10; i++){
        cin>>num;
        if(num==0){
            cero+=1;
        }
        else if(num>0){
            positivo+=1;;
        }else if (num<0){
            negativo+=1;;
        }
    }
    cout <<"Numero positivos: "<<positivo<<endl;
    cout<<"numero negativos: "<<negativo<<endl;
    cout<<"numero cero: "<<cero<<endl;

    return 0;
};




