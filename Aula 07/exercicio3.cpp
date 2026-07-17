#include <iostream>

using namespace std;

class Termometro {

private:

    double temperatura;

public:

    Termometro() {

        temperatura = 20.0;
    }

    void definirTemperatura(double valor) {

        if(valor >= -273.15)
            temperatura = valor;
        else
            cout << "Valor de temperatura invalido!" << endl;
    }

    double obterCelsius() {

        return temperatura;
    }

    double obterFahrenheit() {

        return (temperatura * 9.0 / 5.0) + 32;
    }

};

int main() {

    Termometro ambiente;

    cout << "Temperatura inicial: "
         << ambiente.obterCelsius()
         << " C" << endl;

    ambiente.definirTemperatura(28);

    cout << "Em Celsius: "
         << ambiente.obterCelsius()
         << " C" << endl;

    cout << "Em Fahrenheit: "
         << ambiente.obterFahrenheit()
         << " F" << endl;

    return 0;
}