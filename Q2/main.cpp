#include <iostream>
using namespace std;
// Problema 2, Project Euler, Lucas Lobo 
int main(){
    long n = 0;
    long soma = 0;
    long n1 = 1;
    long n2 = 1;
     
    while (n < 4000000) {
        if ((n % 2) == 0) {
            soma += n;
        }
     
        n = n1 + n2;
        n2 = n1;
        n1 = n;
    }
    cout<<"A soma dos numeros pares da sequencia de fibbonacci,"
    "com maior termo menor que 4000000 é: "<<soma;
    return soma;
}
