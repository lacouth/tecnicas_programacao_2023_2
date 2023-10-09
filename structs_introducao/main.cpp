#include <iostream>

using namespace std;

const int TAM = 5;

struct Aluno{
    string nome;
    int nota;
};

int main()
{

    Aluno turma[TAM] = {
                        {"Fulano", 88},
                        {"Beltrano",50},
                        {"Cicrano",77},
                        {"João",45},
                        {"Maria",90}
                       };
    bool troca = true;
    Aluno cumbuca;
    while(troca){
        troca = false;
        for(int i = 0; i < TAM - 1; i++){
            if(turma[i].nota > turma[i+1].nota){
                cumbuca = turma[i];
                turma[i] = turma[i+1];
                turma[i+1] = cumbuca;
                troca = true;
            }
        }
    }
    for(int i = 0; i < TAM; i++){
        cout << turma[i].nome << " " << turma[i].nota << endl;
    }
    cout << endl;

    return 0;
}
