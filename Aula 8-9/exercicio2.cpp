#include <iostream>

using namespace std;

class Contador {

private:

    int numero;

public:

    Contador(int n = 0) {

        numero = (n >= 0) ? n : 0;
    }

    Contador& operator++() {

        ++numero;
        return *this;
    }

    Contador operator++(int) {

        Contador copia(*this);
        numero++;
        return copia;
    }

    void exibir() {

        cout << "Valor: " << numero << endl;
    }

};

int main() {

    Contador contador(5);

    cout << "Inicio: ";
    contador.exibir();

    ++contador;

    cout << "Apos pre-incremento: ";
    contador.exibir();

    contador++;

    cout << "Apos pos-incremento: ";
    contador.exibir();

    return 0;
}