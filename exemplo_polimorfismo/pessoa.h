#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa
{
private:
    string nome;
    int ano;
public:
    Pessoa();
    Pessoa(string nome);
    Pessoa(string nome, int ano);
    void set_nome(string nome);
    string get_nome();

    int getAno() const;
    void setAno(int newAno);
    string apresentar();
    string apresentar(int ano);
};

#endif // PESSOA_H
