#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
     char Ejemplo[31];
 cout << " introduzca frase \n ";
 cin.getline(Ejemplo,30);
 cout << "\t\"" << Ejemplo << "\"\n";
 cout << " introduzca otra frase \n ";
 cin >> Ejemplo;
 // Definir array de caracteres
 // lectura de cadena completa
 // lectura de palabra hasta encontrar blanco
 cout << "\t\"" << Ejemplo << "\"\n";

    return 0;
};

