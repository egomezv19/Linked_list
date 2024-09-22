#include <iostream>
using namespace std;

int main (){
    cout <<"Salario neto de los trabajadores: "<<endl;
    float horas,extras,tasa,salarioBruto, salarioNeto;
    cin >>horas;
    if (horas<=38){
        extras =0;
    }else{
        extras = horas-38;
        horas = 38;
    }
   



    return 0;
}