using namespace std;
#include <iostream>
#include <vector>
// Problema 10, Project Euler, Lucas Lobo 
// Aproveitando quase tudo do problema 7
int main(){
    long int somaprimos = 0;
    int  i, numero = 2;
    bool checagem;
    vector<int> primos;
     
    primos.push_back(2);
     
    while(numero < 2000000){
        numero++ ;
        i = 0;
        checagem = true;
        for (;primos[i]*primos[i] <= numero;i++) {
            if (numero % primos[i] == 0) {
                checagem = false;
                break;
            }
            
        }
        if (checagem == true)
            primos.push_back(numero);
    }
    for (i=0;i<primos.size();i++)
        somaprimos+=primos[i];
    cout<<somaprimos;
    return somaprimos;
}
