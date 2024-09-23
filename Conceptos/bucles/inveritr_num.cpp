#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
    int num = 1020304;
    int invertido =0;
    while (num>0){
        int digito = num%10; //sacamos el ultimo digito
        invertido = invertido *10 + digito; // se multiplica por 10 para que al sumar se añada como unidad a las decenas 
        num = num /10; //quitamos el ultimo digito

    }
    cout <<"numero invertido: "<<invertido<<endl;
    return 0;
};

