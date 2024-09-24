#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
     int i, Primero[21];
 for (i = 1; i <= 6; i++)
 cin >> Primero[i];
 for(i = 3; i > 0; i--)
 cout << Primero[2 * i]; // va saltando desde 

    return 0;
};

