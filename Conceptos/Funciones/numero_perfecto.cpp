#include "iostream"
#include "stdio.h"

using namespace std;
void perfecto(int a);
int main (){
    int a = 6;
    perfecto(a);

    return 0;
};
void perfecto (int a){
    int suma =0;
    for (int i =1;i<a;i++){
        if (a%i==0){
            suma +=i;
        cout<<"El valor de i: "<<i<<" y la suma: "<<suma<<endl; 
    }
}
}
