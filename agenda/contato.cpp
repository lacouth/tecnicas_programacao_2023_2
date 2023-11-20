#include "contato.h"

string Contato::getNome() const
{
    return nome;
}

void Contato::setNome(const string &newNome)
{
    nome = newNome;
}

string Contato::getEmail() const
{
    return email;
}

void Contato::setEmail(const string &newEmail)
{
    email = newEmail;
}

string Contato::getTelefone() const
{
    return telefone;
}

void Contato::setTelefone(const string &newTelefone)
{
    telefone = newTelefone;
}

string Contato::dadosCSV()
{
    return nome + "," + email + "," + telefone;
}

Contato::Contato()
{

}

Contato::Contato(string n, string e, string t)
{
    this->nome = n;
    this->email = e;
    this->telefone = t;
}
