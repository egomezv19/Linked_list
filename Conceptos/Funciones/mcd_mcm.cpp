#include "iostream"
#include "stdio.h"
#define filas 5
using namespace std;

int main (){
    int i,j, suma,  A[filas][filas];
 for(i = 0; i < filas; i++)
    for(j = 0; j < filas; j++)
    cin >> A[i][j];
 for(i = 0; i < filas; i++)
    for (j = 0; j < filas; j++)
        if(!(i == j))
        suma += A[i][j];
    cout << " suma " << suma;

    return 0;
};

