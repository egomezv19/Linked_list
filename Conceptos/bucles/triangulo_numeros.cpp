#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
    cout<<"ingrese numero: "<<endl;
    int num=10;
    // forma creciente
    for (int i=1; i<=num; i++){
        for (int j =1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // forma decreciente
    for (int i = num-1; i>=1;--i){
        for (int j = 1; j<=i; j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }
    

    return 0;
};

