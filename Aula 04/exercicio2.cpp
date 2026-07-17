#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int main() {
    int valor1, valor2;

    cout << "digite o primeiro valor inteiro: ";
    cin >> valor1;
    cout << "digite o segundo valor inteiro: ";
    cin >> valor2;

    cout << "Resultado da soma: " << soma(valor1, valor2) << endl;

    return 0;
}