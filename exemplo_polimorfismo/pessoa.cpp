#include "pessoa.h"

int Pessoa::getAno() const
{
    return this->ano;
}

void Pessoa::setAno(int newAno)
{
    this->ano = newAno;
}

string Pessoa::apresentar()
{
    int idade = 2023 - this->ano;
    return "Olá, eu sou " + this->nome +
            " tenho " + to_string(idade) + " anos";
}

string Pessoa::apresentar(int ano)
{
    int idade = ano - this->ano;
    return "Olá, eu sou " + this->nome +
            " tenho " + to_string(idade) + " anos";
}

Pessoa::Pessoa()
{
    nome = "Fulano";
    ano = 1970;
}

Pessoa::Pessoa(string nome)
{
    set_nome(nome);
    setAno(1970);
}

Pessoa::Pessoa(string nome, int ano)
{
    set_nome(nome);
    setAno(ano);
}

void Pessoa::set_nome(string nome){
    if(nome.size() > 1){
        this->nome = nome;
    }
}

string Pessoa::get_nome()
{
    return this->nome;
}
