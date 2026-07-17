#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a[100];
    double* aPtr = a;
    int quantidade;
    double s = 0.0;

    cout << "quantos valores voce deseja digitar (maximo 100): ";
    cin >> quantidade;

    if (quantidade > 100) {
        quantidade = 100;
    }

    for (int j = 0; j < quantidade; j++) {
        cout << "digite o valor " << j + 1 << ": ";
        cin >> *(a + j);
    }

    for (int j = 0; j < quantidade; j++) {
        s += *(aPtr + j);
    }

    if (quantidade > 0) {
        double media = s / quantidade;
        cout << fixed << setprecision(2);
        cout << "Soma dos valores: " << s << endl;
        cout << "Media dos valores: " << media << endl;
    }

    return 0;
}