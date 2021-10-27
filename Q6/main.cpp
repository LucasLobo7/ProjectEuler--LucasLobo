#include <iostream>
using namespace std;
// Problema 6 , Project Euler, Lucas Lobo 
int main(){
    long quadradosoma = 0;
    long somaquadrado = 0;
    int N = 100;
     
    //Equação da pa ao quadrado 
    quadradosoma = (N * (N+1)/ 2)*(N * (N+1)/ 2);
    for (int i = 1;i<=N;i++)
        somaquadrado += i*i;
    //Formula analitica para soma quadrado: somaquadrado = (N * (N + 1) * (2 * N + 1)) / 6;
     
    cout<<quadradosoma - somaquadrado;
    return quadradosoma - somaquadrado;
}
