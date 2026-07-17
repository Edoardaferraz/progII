#include "Personagem.h"

Personagem::Personagem(string n, int v, int a, int d) {
    nome = n;
    vida = v;
    ataque = a;
    defesa = d;
}

Personagem::~Personagem() {}

string Personagem::getNome() {
    return nome;
}

int Personagem::getVida() {
    return vida;
}

int Personagem::getAtaque() {
    return ataque;
}

int Personagem::getDefesa() {
    return defesa;
}

void Personagem::setVida(int v) {
    vida = v;

    if (vida < 0)
        vida = 0;
}

void Personagem::receberDano(int dano) {
    dano -= defesa;

    if (dano < 1)
        dano = 1;

    vida -= dano;

    if (vida < 0)
        vida = 0;
}

bool Personagem::estaVivo() {
    return vida > 0;
}