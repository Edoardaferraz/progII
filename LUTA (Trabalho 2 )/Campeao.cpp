#include "Campeao.h"
#include <iostream>

using namespace std;

Campeao::Campeao(string nome, int vida, int ataque, int defesa,
                 string golpe, float mult)
    : Personagem(nome, vida, ataque, defesa) {

    golpeEspecial = golpe;
    multiplicador = mult;
}

int Campeao::executarGolpe() {

    int dano = ataque * multiplicador;

    cout << "\n" << nome << " usou " << golpeEspecial << "!" << endl;
    cout << "Causou " << dano << " pontos de dano!" << endl;

    return dano;
}