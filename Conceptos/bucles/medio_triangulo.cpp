#include "iostream"
#include "stdio.h"

using namespace std;

int main (){
    
int n, m;
for (n = 1; n <= 10; n++)
{
cout << " tabla de multiplicar del " << n << endl;
for (m = 10; m >= 1; m--)
cout <<n << " x " << m << " = " <<n * m << endl;
}

for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
cout << " * ";
cout << endl;
}
    return 0;
};

