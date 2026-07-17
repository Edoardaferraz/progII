#ifndef CAMPEAO_H
#define CAMPEAO_H

#include "Personagem.h"

class Campeao : public Personagem {
private:
    string golpeEspecial;
    float multiplicador;

public:
    Campeao(string nome, int vida, int ataque, int defesa,
            string golpe, float mult);

    int executarGolpe() override;
};

#endif