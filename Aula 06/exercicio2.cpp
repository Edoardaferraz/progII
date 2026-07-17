#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> numeros;

    int opcao, valor;

    do {

        cout << "\n===== LISTA =====\n";
        cout << "1 - Inserir no comeco\n";
        cout << "2 - Inserir no fim\n";
        cout << "3 - Excluir numero\n";
        cout << "4 - Exibir lista\n";
        cout << "5 - Quantidade de elementos\n";
        cout << "0 - Encerrar\n";
        cout << "Opcao: ";
        cin >> opcao;

        switch(opcao) {

            case 1:
                cin >> valor;
                numeros.push_front(valor);
                break;

            case 2:
                cin >> valor;
                numeros.push_back(valor);
                break;

            case 3:
                cin >> valor;
                numeros.remove(valor);
                break;

            case 4:

                cout << "Elementos: ";

                for(int n : numeros)
                    cout << n << " ";

                cout << endl;
                break;

            case 5:

                cout << "Total: "
                     << numeros.size()
                     << endl;
                break;
        }

    } while(opcao != 0);

    return 0;
}