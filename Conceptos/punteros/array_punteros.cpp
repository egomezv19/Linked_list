#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
     float V[6], *P[6]; // array normalzzzzzz                                          
    for (int j = 0; j < 6; j++)
    {
    *(V+j) = (5-j) * 10 + 1;
    *(P+j) = V+j;
    // inicialización de array de punteros
    }
    cout << "    Direccion                Contenido" << endl;
    for (int j = 0; j<6; j++)
    {
    cout <<  " V+" << j << " = " << *(P+j) << " = *(P+" << j << ")";
    cout << "      V[" << j <<"] = " << **(P+j) << "\n";
    }

    return 0;
};

