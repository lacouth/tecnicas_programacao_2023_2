#include <iostream>
#include <string>
#include "agenda.h"

using namespace std;

int main()
{
    Agenda agenda;
    string nome;
    int opcao;
    while(true){
        system("clear");
        cout << "1. Adicionar contato\n"
             << "2. Listar contatos\n"
             << "3. Pesquisar contato pelo nome\n"
             << "4. Salvar agenda no arquivo\n"
             << "5. Carregar agenda do arquivo\n"
             << "0. Sair" << endl;
        cout << "Informe a sua opção: ";
        cin >> opcao;
        cin.ignore();
        switch(opcao){
            case 1:
                agenda.adicionarContatoManual();
                break;
            case 2:
                agenda.listarContatos();
                break;
            case 3:
                cout << "Informe o nome para pesquisar: ";
                getline(cin,nome);
                agenda.buscarContato(nome);
                break;
            case 4:
                cout << "Informe o nome do arquivo: ";
                getline(cin,nome);
                agenda.salvarContatos(nome);
                break;
            case 5:
                cout << "Informe o nome do arquivo: ";
                getline(cin,nome);
                agenda.carregarContatos(nome);
                break;
            case 0:
                cout << "Saindo do sistema...";
                return 0;
            default:
                cout << "Opção inválida" << endl;
                break;
        }
        cout << "pressione ENTER para continuar...";
        cin.get();
    }
    return 0;
}
