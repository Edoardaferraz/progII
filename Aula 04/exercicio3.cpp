#include <iostream>
#include <iomanip>
using namespace std;

inline double converterParaReal(double dolares) {
    return dolares * 5.25;
}

int main() {
    double quantiaDolar;

    cout << "digite a quantia em dolares que deseja converter: ";
    cin >> quantiaDolar;

    cout << "Valor convertido em reais: R$ " << fixed << setprecision(2) << converterParaReal(quantiaDolar) << endl;

    return 0;
}