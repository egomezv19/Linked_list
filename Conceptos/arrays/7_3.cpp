#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
    int tamanio,n,suma=0;
    int vector[]={1,1,1,4,5,6,1,2,2,2,2,2,2,};
    int limite=sizeof(vector)/sizeof(vector[0]); //manejo de bytes

    for (int i = 0;i<limite;i++){
        for (int j=i+1;j<limite;j++){
            
            if (vector[i]==vector[j]){
                suma+=1;
            }
        }
    }
    if (suma>=(limite/2)){
        cout<<"Es mayoritario "<<endl;
    }else
    cout<<"No tengo idea de lo que hice, valor de suma "<<suma<<endl;
    cout<<"limite: "<<limite;
    return 0;
};

