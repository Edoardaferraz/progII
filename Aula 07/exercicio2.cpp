#include <iostream>

using namespace std;

class ContaBancaria {

private:

    int conta;
    double saldo;

public:

    ContaBancaria(int numeroConta) {

        conta = numeroConta;
        saldo = 0;
    }

    double consultarSaldo() {

        return saldo;
    }

    void realizarDeposito(double valor) {

        if(valor > 0)
            saldo += valor;
    }

    void realizarSaque(double valor) {

        if(valor > 0 && valor <= saldo)
            saldo -= valor;
        else
            cout << "Nao foi possivel realizar o saque." << endl;
    }

};

int main() {

    ContaBancaria minhaConta(98765);

    minhaConta.realizarDeposito(1500);

    cout << "Saldo: R$ "
         << minhaConta.consultarSaldo()
         << endl;

    minhaConta.realizarSaque(450);

    cout << "Saldo restante: R$ "
         << minhaConta.consultarSaldo()
         << endl;

    return 0;
}