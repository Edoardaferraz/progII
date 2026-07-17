#include <iostream>
#include <string>
using namespace std;
int main() {
    int idade;
    cout << "digite sua idade:" << endl;
    cin >> idade;
    
    if (idade < 16) {
        cout << "acesso negado" << endl;
    } else if (idade == 16 || idade == 17) {
        cout << "precisa de autorizacao" << endl;
    } else if (idade >= 18) {
        cout << "acesso com niveis e seu nivel eh: ";
        switch (idade) {
            case 18: 
                cout << "basico" << endl;
                break;
            case 19:
                cout << "intermediario" << endl;
                break;
            default: 
                cout << "avancado" << endl;
                break;
        }
    } else {
        cout << "invalido" << endl;
    }
    
    return 0;
}