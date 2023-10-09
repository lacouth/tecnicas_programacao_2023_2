#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream arquivo;
    arquivo.open("alunos.csv", ios::app);
    if(arquivo.is_open()){
        string resposta = "sim";
        string nome;
        string matricula;
        double media;
        do{
            cout << "Informe o nome do aluno: ";
            getline(cin,nome);
            cout << "Informe a matrícula do aluno: ";
            cin >> matricula;
            cout << "Informe o CRE do aluno: ";
            cin >> media;
            cout << nome << ", " << matricula << ", " << media << endl;
            arquivo << nome << "," << matricula << "," << media << endl;
            cout << "Deseja continuar? ";
            cin >> resposta;
            cin.ignore();
        }while(resposta == "sim");
        arquivo.close();
    }else{
        cout << "Não foi possíve abrir o arquivo" << endl;
    }
    return 0;
}
