#include <iostream>
#include <string>
using namespace std;
int main(){
    string nome;
    int idade;
    double altura;
    cout << "digite seu nome:" << endl;
    getline (cin, nome);
    cout << "digite sua idade:" << endl;
    cin >> idade;
    cout << "digite sua altura:" << endl;
    cin >> altura;
    cout << "nome: " << nome << endl;
    cout << "idade: " << idade << endl;
    cout << "altura: " << altura << endl;
    return 0;
}