#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
    int suma=0;
    for ( int i = 0,valor = 10; i < valor ; ++i){
        cout << i+1 <<" ";
        suma +=i+1;
    }
    cout<<"la suma es: "<<suma<<endl;
    


    return 0;
};

