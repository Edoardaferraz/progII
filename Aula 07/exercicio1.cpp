#include <iostream>
#include <string>

using namespace std;

class Gato {

private:

    string nome;
    int idade;
    double peso;

public:

    Gato(string nomeGato, int idadeGato, double pesoGato) {

        nome = nomeGato;
        idade = idadeGato;

        if(pesoGato > 0)
            peso = pesoGato;
        else
            peso = 1.0;
    }

    void alterarPeso(double novoPeso) {

        if(novoPeso > 0)
            peso = novoPeso;
        else
            cout << "Peso informado e invalido!" << endl;
    }

    void mostrarDados() {

        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Peso: " << peso << " kg" << endl;
    }

};

int main() {

    Gato meuGato("Luna", 2, 3.8);

    meuGato.mostrarDados();

    cout << "\nAtualizando peso...\n";

    meuGato.alterarPeso(4.1);

    meuGato.mostrarDados();

    return 0;
}