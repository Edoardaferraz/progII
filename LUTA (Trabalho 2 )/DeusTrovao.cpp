#include "DeusTrovao.h"
#include <iostream>
#include <cstdlib>

using namespace std;

DeusTrovao::DeusTrovao(string nome, int vida, int ataque, int defesa,
                       string golpe, float mult)
    : Personagem(nome, vida, ataque, defesa) {

    golpeEspecial = golpe;
    multiplicador = mult;
}

int DeusTrovao::executarGolpe() {

    int dano = ataque * multiplicador;

    cout << "\n" << nome << " usou " << golpeEspecial << "!" << endl;

    // 30% de chance de invocar um raio extra
    if (rand() % 100 < 30) {
        cout << "⚡ O trovão atingiu o adversário!" << endl;
        dano += 20;
    }

    cout << "Causou " << dano << " pontos de dano!" << endl;

    return dano;
}