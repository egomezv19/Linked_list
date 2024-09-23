#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
    for ( int i = 1; i<31; i++){
        if (i%2==0){
            cout<<"El numero "<<i<<" es par"<<endl;
        }else{
            cout<<"El numero "<<i<<" es impar "<<endl;
        }
    }

    return 0;
};

