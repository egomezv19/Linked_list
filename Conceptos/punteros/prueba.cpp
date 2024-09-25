#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
    
    float V[6];
    for (int j = 0; j < 6; j++)
        *(V+j) = (j + 1) * 10 + 1;
        cout << "    Direccion        Contenido" << endl;
    for (int j= 0; j < 6; j++)
    {
        cout <<  " V+" << j << " = "<< V + j; 
        cout << "      V[" << j <<"] = " << *(V+j)<< "\n";
    }

    
    return 0;
};

