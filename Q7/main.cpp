using namespace std;
#include <iostream>
#include <vector>
// Problema 7, Project Euler, Lucas Lobo 
int main(){
    int nprimos = 10001;
    int  i, numero = 2;
    bool checagem;
    vector<int> primos;
     
    primos.push_back(2);
     
    while(primos.size() < nprimos){
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
    cout<<primos[10000];
    return primos[10000];
}
