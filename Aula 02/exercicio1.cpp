#include <iostream>
#include <string>
using namespace std;
int main(){
    string nome;
    int idade;
    cout << "digite seu nome completo:" << endl;
    getline (cin, nome);
    
    cout << "digite sua idade:" << endl;
    cin >> idade;
    cout << "Nome Completo: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    return 0;
}