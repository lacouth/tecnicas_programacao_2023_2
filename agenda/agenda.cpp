#include "agenda.h"

Agenda::Agenda()
{

}

void Agenda::adicionarContato(Contato contato)
{
    agenda[contato.getNome()] = contato;
}

void Agenda::buscarContato(string nome)
{
    if(agenda.find(nome) != agenda.end()){
        cout << "Contato encontrado: " << endl;
        cout << agenda[nome].dadosCSV() << endl;
    }else{
        cout << "Contato não encontrado" << endl;
    }
}

void Agenda::carregarContatos(string nomeArquivo)
{
    ifstream arquivo;
    string dado;
    Contato contato;
    arquivo.open(nomeArquivo);
    if(arquivo.is_open()){
        getline(arquivo,dado); // ignorando o cabeçalho
        while(getline(arquivo,dado,',')){
            contato.setNome(dado);
            getline(arquivo,dado,',');
            contato.setEmail(dado);
            getline(arquivo,dado);
            contato.setTelefone(dado);
            adicionarContato(contato);
        }
        arquivo.close();
    }else{
        cout << "Não foi possível abrir o arquivo" << endl;
    }
}

void Agenda::salvarContatos(string nomeArquivo)
{
    ofstream arquivo;
    arquivo.open(nomeArquivo);
    if(arquivo.is_open()){
        arquivo << "Nome,email,telefone" << endl;
        for(auto &[nome,contato] : agenda){
            arquivo << contato.dadosCSV() << endl;
        }
        arquivo.close();
    }else{
        cout << "Não foi possível abrir o arquivo" << endl;
    }
}

void Agenda::listarContatos()
{
    cout << "Lista de contatos: " << endl;
    for(auto &[nome,contato] : agenda){
        cout << contato.dadosCSV() << endl;
    }
}

void Agenda::adicionarContatoManual()
{
    Contato contato;
    string dado;
    cout << "Informe o nome: ";
    getline(cin,dado);
    contato.setNome(dado);
    cout << "Informe o email: ";
    getline(cin,dado);
    contato.setEmail(dado);
    cout << "Informe o telefone: ";
    getline(cin,dado);
    contato.setTelefone(dado);
    adicionarContato(contato);
    cout << "Contato adicionado com sucesso" << endl;
}
