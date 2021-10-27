#include <iostream>
using namespace std;
// Problema 3, Project Euler, Lucas Lobo 
int main(){
    long numero = 600851475143;
    long divisor = 2;
    long mdivisor = 2;
    
    while(divisor*divisor <= numero){
        if(numero%divisor==0){
            mdivisor = divisor;
            numero /=divisor;
        }
        else
            divisor++;    
    }
    mdivisor = numero;
    cout<<"o maior divisor primo de 600851475143 é: "<< mdivisor;
    return mdivisor;
}
