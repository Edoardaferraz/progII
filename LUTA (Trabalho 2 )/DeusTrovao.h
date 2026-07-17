#ifndef DEUSTROVAO_H
#define DEUSTROVAO_H

#include "Personagem.h"

class DeusTrovao : public Personagem {
private:
    string golpeEspecial;
    float multiplicador;

public:
    DeusTrovao(string nome, int vida, int ataque, int defesa,
               string golpe, float mult);

    int executarGolpe() override;
};

#endif