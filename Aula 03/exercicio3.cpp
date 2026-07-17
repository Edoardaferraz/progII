#include <iostream>
using namespace std;
int main() {
    int numero, somaDivisores = 0;
    
    do {
        cout << "digite um numero maior que 0: ";
        cin >> numero;
    } while(numero <= 0);
    
    for(int i = 1; i < numero; i++) {
        if(numero % i == 0) {
            somaDivisores += i;
        }
    }
  
    if(somaDivisores == numero) {
        cout << numero << " eh perfeito" << endl;
    } else {
        cout << numero << " nao eh perfeito" << endl;
    }
    
    return 0;
}