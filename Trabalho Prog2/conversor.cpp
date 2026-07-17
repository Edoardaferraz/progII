#include <iostream>
using namespace std;

struct Info {
    int valor;
    int base;
};

int main() {
    Info dados;
    
    cout << "Informe o valor em decimal: ";
    cin >> dados.valor;

    /*cout << "Informe a base desejada (2): ";
    cin >> dados.base;

    if (dados.base < 2 || dados.base > ) {
        cout << "Base fora do permitido." << endl;
        return 0;
    }
*/
    int aux = dados.valor;
    int resultado[100];
    int pos = 0;

    while (aux > 0) {
        resultado[pos] = aux % 2;
        aux = aux / 2 ;
        pos++;
    }

    cout << "Resultado: ";

    for (int i = pos - 1; i >= 0; i--) {
        if (resultado[i] < 10) {
            cout << resultado[i];
        } else {
            cout << char(resultado[i] + 55);
        }
    }

    cout << endl;

    return 0;
    
}