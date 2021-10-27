#include <iostream>
using namespace std;
// Problema 4 , Project Euler, Lucas Lobo 
int main(){
    long int n1,n2,n,reverso,resto, nsalvo= 0;
    long int palindromo = 0;
     
    for(n1 = 999;n1>99;n1--){
        for(n2 = 999;n2>99;n2--){
            nsalvo = n1*n2;
            n = nsalvo;
            
            while(n!=0)    
            {
                resto=n%10;      
                reverso=reverso*10+resto;    
                n/=10;    
            }
            
            if(nsalvo == reverso && nsalvo > palindromo)
                palindromo = nsalvo;
            reverso = 0;
        }
    }
    cout<<palindromo;
    return palindromo
}
