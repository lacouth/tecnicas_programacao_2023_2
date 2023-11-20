#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include "contato.h"

using namespace std;

class Agenda
{
private:
    map<string,Contato> agenda; // relação entre o nome - Contato
public:
    Agenda();
    void adicionarContato(Contato contato);
    void buscarContato(string nome);
    void carregarContatos(string nomeArquivo);
    void salvarContatos(string nomeArquivo);
    void listarContatos();
    void adicionarContatoManual();
};

#endif // AGENDA_H
