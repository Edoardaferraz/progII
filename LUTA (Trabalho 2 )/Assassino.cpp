#include "Assassino.h"
#include <iostream>

using namespace std;

Assassino::Assassino(string nome, int vida, int ataque, int defesa,
                     string golpe, float mult)
    : Personagem(nome, vida, ataque, defesa) {

    golpeEspecial = golpe;
    multiplicador = mult;
}

int Assassino::executarGolpe() {

    int dano = ataque * multiplicador;

    cout << "\n" << nome << " executou " << golpeEspecial << "!" << endl;

    // Os assassinos possuem uma chance de causar dano crítico
    if (rand() % 100 < 25) {
        dano *= 2;
        cout << ">>> GOLPE CRÍTICO! <<<" << endl;
    }

    cout << "Causou " << dano << " pontos de dano!" << endl;

    return dano;
}