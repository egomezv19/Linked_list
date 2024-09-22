#include <iostream>


int main (){
    std::cout<<"Calculadora simple waaaaaaaaa\n";

    int num1,num2;
    char caracter;
    std::cin>>num1>>num2>>caracter;
    switch(caracter){
        case '+': std::cout<<num1+num2;break;
        case '-': std::cout<<num1-num2;break;
        case '*': std::cout<<num1*num2;break;
        default: std::cout<<"no se re conoce el signo waaaaa";
    }
    return 0;
}