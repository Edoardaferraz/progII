#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    stack<string> historico;

    int opcao;
    string texto;

    do {

        cout << "\n===== PILHA =====\n";
        cout << "1 - Adicionar texto\n";
        cout << "2 - Desfazer\n";
        cout << "3 - Mostrar ultimo\n";
        cout << "0 - Encerrar\n";
        cout << "Opcao: ";

        cin >> opcao;

        switch(opcao) {

            case 1:

                cout << "Texto: ";
                cin >> texto;

                historico.push(texto);

                break;

            case 2:

                if(!historico.empty()) {

                    cout << "Removido: "
                         << historico.top()
                         << endl;

                    historico.pop();
                }

                else
                    cout << "Pilha vazia!\n";

                break;

            case 3:

                if(!historico.empty())
                    cout << "Ultimo: "
                         << historico.top()
                         << endl;

                else
                    cout << "Pilha vazia!\n";

                break;
        }

    } while(opcao != 0);

    return 0;
}