#include "iostream"
#include "stdio.h"
#include <cstdlib>
using namespace std;
bool primos(int a);

int main (){
    int vector[100];
    
    for (int i=0;i<100;i++){
        int random=0;
        random = 1 + rand()%1000;// Genera un valor entre 1 y 999
        //cout<<"valor de random: "<<random<<endl;
        if (primos(random)==true){
            vector[i]=random;
        }else
            i--;
    
    }
    for(int i = 0;i<100;i++){
        cout<<"valor almacenada en "<<i<<" es: "<<vector[i]<<endl;
    }



    return 0;
};

bool primos(int a){

    if (a==1){
        return true;
    }else if(a>1){
        for (int i = 2;i<a;i++){
            if (a%i==0){
                return false;
            }
            else
                return true;
        }
    }
       

}

