#include "personagem.h"

Personagem::Personagem()
{
    this->nome = "NPC";
    this->vida = 80;
    this->ataque = 5;
}

Personagem::Personagem(string nome)
{
    this->nome = nome;
    this->vida = 100;
    this->ataque = 5;
}

Personagem::Personagem(string nome, int vida, int ataque)
{
    this->nome = nome;
    this->vida = vida;
    this->ataque = ataque;

}

string Personagem::apresentar()
{
    return "Olá, eu sou " + this->nome +
            " possuo " + to_string(this->vida) +
            " e " + to_string(this->ataque) + " pontos de ataque";
}

int Personagem::calcularAtaque()
{
    int dado = 1 + (rand() % 6);

    cout << this->nome << " realizou um ataque de " << this->ataque + dado << endl;
    return this->ataque + dado;

}

void Personagem::defender(int ataqueSofrido)
{
    int dado = 1 + (rand() % 6);
    int dano = ataqueSofrido - dado;
    this->vida -= dano;
    cout << this->nome << " se defendeu com " << dado << endl;
    if(this->vida <= 0){
        cout << this->nome << " faleceu" << endl;
    }
}

void Personagem::status()
{
    cout << this->nome << " tem vida: " << this->vida << endl;
}

