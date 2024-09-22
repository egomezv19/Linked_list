#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
    cout<<"ingrese numero: "<<endl;
    int num=10;

    for ( int i = 1; i <num; i++){
        cout <<i<<" "<<endl;
        for (int j = 1; j<i; j++){
            cout <<j<< " ";
        }
    }
    

    return 0;
};

