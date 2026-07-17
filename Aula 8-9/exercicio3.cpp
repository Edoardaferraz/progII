#include <iostream>
#include <string>

using namespace std;

class StringSegura {

private:

    string mensagem;

public:

    StringSegura() = default;

    StringSegura(string txt) : mensagem(txt) {}

    StringSegura(const StringSegura&) = default;

    StringSegura(StringSegura&&) = default;

    StringSegura& operator=(StringSegura&&) = default;

    StringSegura& operator=(const StringSegura&) = delete;

    void exibir() {

        cout << mensagem << endl;
    }

};

int main() {

    StringSegura texto1("Programacao Orientada a Objetos");

    StringSegura texto2(texto1);

    texto2.exibir();

    return 0;
}