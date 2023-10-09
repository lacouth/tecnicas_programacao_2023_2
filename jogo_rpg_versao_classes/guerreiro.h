#ifndef GUERREIRO_H
#define GUERREIRO_H

#include "personagem.h"

class Guerreiro : public Personagem
{
public:
    Guerreiro();
    Guerreiro(string nome);
    Guerreiro(string nome, int vida, int ataque);
    int calcularAtaque();
};

#endif // GUERREIRO_H
