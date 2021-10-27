using namespace std;
#include <iostream>
#include <vector>
// Problema 9, Project Euler, Lucas Lobo 
int main(){
    int a, b, c = 0;
    for (a = 1; a < 333; a++) {
        for (b = a; b < 500; b++) {
            c = 1000 - a - b;
            if (a*a + b*b == c*c) {
                cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" produto ="<<a*b*c;
                return a*b*c;
            }
        }
    }
}
