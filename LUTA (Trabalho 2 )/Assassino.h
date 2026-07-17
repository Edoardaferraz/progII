#ifndef ASSASSINO_H
#define ASSASSINO_H

#include "Personagem.h"

class Assassino : public Personagem {
private:
    string golpeEspecial;
    float multiplicador;

public:
    Assassino(string nome, int vida, int ataque, int defesa,
              string golpe, float mult);

    int executarGolpe() override;
};

#endif