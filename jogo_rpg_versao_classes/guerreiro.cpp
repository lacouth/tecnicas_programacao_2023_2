#include "guerreiro.h"

Guerreiro::Guerreiro() : Personagem()
{

}

Guerreiro::Guerreiro(string nome) : Personagem(nome)
{

}

Guerreiro::Guerreiro(string nome, int vida, int ataque) : Personagem(nome,vida,ataque)
{

}

int Guerreiro::calcularAtaque()
{
    int dado = 1 + (rand() % 12);
    cout << this->nome << " realizou um ataque de GUERRA " << this->ataque + dado << endl;
    return this->ataque + dado;
}
