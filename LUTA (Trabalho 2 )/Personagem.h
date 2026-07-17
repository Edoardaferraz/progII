#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>
#include <string>

using namespace std;

class Personagem {
protected:
    string nome;
    int vida;
    int ataque;
    int defesa;

public:
    Personagem(string n, int v, int a, int d);

    virtual ~Personagem();

    string getNome();
    int getVida();
    int getAtaque();
    int getDefesa();

    void setVida(int v);

    virtual int executarGolpe() = 0;

    virtual void receberDano(int dano);

    bool estaVivo();
};

#endif