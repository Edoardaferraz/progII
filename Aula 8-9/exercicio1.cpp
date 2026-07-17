#include <iostream>

using namespace std;

class MatrizDinamica {

private:
    int qtdLinhas;
    int qtdColunas;
    int **dados;

public:

    MatrizDinamica(int l, int c) {

        qtdLinhas = l;
        qtdColunas = c;

        dados = new int*[qtdLinhas];

        for(int i = 0; i < qtdLinhas; i++) {

            dados[i] = new int[qtdColunas];

            for(int j = 0; j < qtdColunas; j++)
                dados[i][j] = 0;
        }
    }

    MatrizDinamica(const MatrizDinamica &m) {

        qtdLinhas = m.qtdLinhas;
        qtdColunas = m.qtdColunas;

        dados = new int*[qtdLinhas];

        for(int i = 0; i < qtdLinhas; i++) {

            dados[i] = new int[qtdColunas];

            for(int j = 0; j < qtdColunas; j++)
                dados[i][j] = m.dados[i][j];
        }
    }

    void alterarValor(int l, int c, int valor) {

        dados[l][c] = valor;
    }

    void imprimir() {

        for(int i = 0; i < qtdLinhas; i++) {

            for(int j = 0; j < qtdColunas; j++)
                cout << dados[i][j] << " ";

            cout << endl;
        }
    }

    ~MatrizDinamica() {

        for(int i = 0; i < qtdLinhas; i++)
            delete[] dados[i];

        delete[] dados;
    }

};

int main() {

    MatrizDinamica matriz1(3,3);

    matriz1.alterarValor(0,0,8);
    matriz1.alterarValor(2,1,15);

    MatrizDinamica matriz2 = matriz1;

    cout << "Matriz Original\n";
    matriz1.imprimir();

    cout << "\nMatriz Copiada\n";
    matriz2.imprimir();

    return 0;
}