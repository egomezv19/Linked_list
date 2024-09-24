/*
#include "iostream"
#include "stdio.h"

using namespace std;
void numeros_amigos(int a, int b);
int main (){
    int a=284,b=220;
    numeros_amigos(a,b);

    return 0;
};
void numeros_amigos(int a, int b){
    int suma1=0,suma2=0;
    for (int i =1;i<a;i++){
        if (a%i==0){
            suma1 +=i;
        cout<<"El valor de i: "<<i<<" y la suma1: "<<suma1<<endl; 
    }
    
    
}cout<<"SUMA FINAL: "<<suma1<<endl;
for (int i =1;i<b;i++){
        if (b%i==0){
            suma2 +=i;
        cout<<"El valor de i: "<<i<<" y la suma2: "<<suma2<<endl; 
    }
}cout<<"SUMA FINAL: "<<suma2<<endl;
if (suma1==b || suma2==a){
    cout<<"Son numeros amigos";

}else 
cout<<"No son numero amigos xdxddx";
}
*/
// otra forma que es la que queria lograr xd 
#include <iostream>

using namespace std;

// Función que calcula la suma de los divisores propios de un número
int perfecto(int a) {
    int suma = 0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            suma += i;
        }
    }
    return suma; // Devolver la suma de los divisores
}

int main() {
    int a = 284, b = 220;

    // Calcular la suma de los divisores para ambos números
    int suma1 = perfecto(a);
    int suma2 = perfecto(b);

    // Verificar si son números amigos
    if (suma1 == b && suma2 == a) {
        cout << a << " y " << b << " son números amigos" << endl;
    } else {
        cout << a << " y " << b << " no son números amigos" << endl;
    }

    return 0;
}

