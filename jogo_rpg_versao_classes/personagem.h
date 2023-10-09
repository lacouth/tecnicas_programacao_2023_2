#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <string>
#include <iostream>

using namespace std;

class Personagem
{
protected:
    string nome;
    int vida;
    int ataque;
public:
    Personagem();
    Personagem(string nome);
    Personagem(string nome, int vida, int ataque);
    string apresentar();
    int calcularAtaque();
    void defender(int ataqueSofrido);
    void status();

};

#endif // PERSONAGEM_H
