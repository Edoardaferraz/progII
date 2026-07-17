#include <iostream>
#include <string>

using namespace std;

class Veiculo {
public:
    string marca;

    virtual void emitirSom() {
        cout << "O motor do veiculo esta funcionando..." << endl;
    }
};

class Carro : public Veiculo {
public:
    int numeroPortas;

    void emitirSom() override {
        cout << "Fon Fon!" << endl;
    }
};

int main() {

    Carro meuCarro;

    meuCarro.marca = "Toyota";
    meuCarro.numeroPortas = 2;

    cout << "=== Dados do Carro ===" << endl;
    cout << "Marca: " << meuCarro.marca << endl;
    cout << "Numero de portas: " << meuCarro.numeroPortas << endl;

    cout << "Som emitido: ";
    meuCarro.emitirSom();

    return 0;
}