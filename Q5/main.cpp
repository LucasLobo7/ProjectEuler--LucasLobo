#include <iostream>
using namespace std;
// Problema 5 , Project Euler, Lucas Lobo 
int main(){
    long long n = 2;
    
    while(1){
        for(int i=2;i<=20;i++){
            if(n%i != 0)
                break;
            if(i==20){
                cout<<n;
                return n;    
            }
        }
        n++;
    }
}
