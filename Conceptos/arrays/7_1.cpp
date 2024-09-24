#include "iostream"
#include "stdio.h"
#define max 10
using namespace std;

int main (){
    int vector[max],valor;
    int suma=0;
    for (int i=0; i<max;i++){
        cout<<"INserte valor: ";
        cin>>valor;
        vector[i]= valor;
        suma+=valor;
    }
    cout<<"La suma es: "<<suma<<endl;
    for (int i = max-1;i>=0;i--){
        cout<<"valor de la posicion "<<i<<" es: "<<vector[i]<<endl;
    } 


    return 0;
};

