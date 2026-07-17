#include <iostream>
#include <memory>

using namespace std;

int main() {

    unique_ptr<int> numero = make_unique<int>(100);

    cout << "Numero armazenado: " << *numero << endl;

    return 0;
}