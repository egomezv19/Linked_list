#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
    int num =10;
    for (int i = num;i>=1;i--){
        for (int j = 1; j<=i;j++){
            cout<<j<<" ";
        }cout <<endl;
    }

    return 0;
};

