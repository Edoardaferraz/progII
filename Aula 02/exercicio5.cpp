#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main (){
    string nome;
    int idade;
    double nota1, nota2, nota3, media;
    cout << "digite seu nome completo: " << endl;
    getline (cin, nome);
    cout << "digite sua idade: " << endl;
    cin >> idade;
    cout << "Nota 1: ";
    cin >> nota1;
    
    cout << "Nota 2: ";
    cin >> nota2;
    
    cout << "Nota 3: ";
    cin >> nota3;
    
    media = (nota1 + nota2 + nota3) / 3.0;
    cout << "Nome Completo: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "sua média foi: " << fixed << setprecision(2) << media << endl;
    return 0;
}