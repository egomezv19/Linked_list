#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
    // el teorema se basa en que busquemos que unos de los dos llegue a cero, para eso
    int num1= 252,num2=105;
    while (num2!=0){
        int variable_temporal = num2;
        num2 = num1 % num2; // calculamos el residuo y guardamos en num2
        num1 = variable_temporal; //antiguo valor de num2 se asigna en a 
    }
    cout <<"el mcd es: "<<num1<<endl;
    return 0;
};

