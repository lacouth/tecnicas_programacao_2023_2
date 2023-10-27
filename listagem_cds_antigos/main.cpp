#include <iostream>
#include <vector>
#include <algorithm>
#include "album.h"

using namespace std;

bool compararPorAno(Album a, Album b){
    return a.getAno() < b.getAno();
}

bool compararPorTamanhoNome(Album a, Album b){
    return a.getNomeAlbum().size() < b.getNomeAlbum().size();
}

int main()
{
    vector<Album> dados;

    string nome, artista;
    int ano;
    int opcao;
    while(true){
        system("clear");
        cout << "1. Inserir album\n"
             << "2. Listar dados\n"
             << "3. Salvar dados\n"
             << "0. Sair\n";
        cout << "Informe a sua opção: ";
        cin >> opcao;
        cin.ignore();
        if(opcao == 1){
            cout << "Informe o nome do album: ";
            getline(cin,nome);
            cout << "Informe o nome do artista: ";
            getline(cin,artista);
            cout << "Informe o ano de lançamento: ";
            cin >> ano;
            cin.ignore();
            Album temp(nome,artista,ano);
            dados.push_back(temp);
        }else if(opcao == 2){
            sort(dados.begin(),dados.end(),compararPorAno);
            cout << "Albuns inseridos: \n";
            for(Album album : dados){
                cout << album.apresentar_csv() << endl;
            }
        }else if(opcao == 0){
            cout << "Saindo...";
            return 0;
        }
        cout << "pressione ENTER para continuar...";
        cin.get();
    }
    return 0;
}
