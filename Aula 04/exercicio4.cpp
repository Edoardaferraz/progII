#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int ANO = 2;
    const int TRIMESTRE = 4;
    double despesas[ANO][TRIMESTRE];
    double totalGeral = 0.0;

    for (int i = 0; i < ANO; i++) {
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << "digite a despesa do Ano " << i + 1 << ", Trimestre " << j + 1 << ": ";
            cin >> despesas[i][j];
            totalGeral += despesas[i][j];
        }
    }

    cout << "\n--- TABELA DE DESPESAS ---" << endl;
    cout << "Ano\tT1\tT2\tT3\tT4" << endl;
    
    for (int i = 0; i < ANO; i++) {
        cout << i + 1 << "\t";
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << fixed << setprecision(2) << despesas[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nValor total de despesas nos dois anos: R$ " << fixed << setprecision(2) << totalGeral << endl;

    return 0;
}