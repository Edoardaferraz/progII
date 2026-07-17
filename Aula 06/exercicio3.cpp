#include <iostream>
#include <queue>

using namespace std;

int main() {

    queue<string> fila;

    int opcao;
    string nome;

    do {

        cout << "\n===== FILA DE ARQUIVOS =====\n";
        cout << "1 - Inserir arquivo\n";
        cout << "2 - Atender arquivo\n";
        cout << "3 - Ver primeiro arquivo\n";
        cout << "0 - Encerrar\n";
        cout << "Opcao: ";
        cin >> opcao;

        switch(opcao) {

            case 1:

                cout << "Arquivo: ";
                cin >> nome;

                fila.push(nome);

                break;

            case 2:

                if(!fila.empty()) {

                    cout << "Atendido: "
                         << fila.front()
                         << endl;

                    fila.pop();
                }

                else
                    cout << "Fila vazia!\n";

                break;

            case 3:

                if(!fila.empty())
                    cout << "Primeiro: "
                         << fila.front()
                         << endl;

                else
                    cout << "Fila vazia!\n";

                break;
        }

    } while(opcao != 0);

    return 0;
}