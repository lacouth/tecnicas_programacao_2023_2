#ifndef CONTATO_H
#define CONTATO_H

#include <string>

using namespace std;

class Contato
{
private:
    string nome;
    string email;
    string telefone;
public:
    Contato();
    Contato(string n, string e, string t);
    string getNome() const;
    void setNome(const string &newNome);
    string getEmail() const;
    void setEmail(const string &newEmail);
    string getTelefone() const;
    void setTelefone(const string &newTelefone);
    string dadosCSV();
};

#endif // CONTATO_H
