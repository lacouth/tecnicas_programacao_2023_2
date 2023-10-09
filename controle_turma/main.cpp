#include <iostream>
#include "aluno.h" // biblioteca local


using namespace std;

int main()
{
    Aluno fulano;
    fulano.nome = "Fulano";
    fulano.matricula = "12344";
    fulano.aumentar_nota(10);

    cout << fulano.nome << " tem nota " << fulano.getMedia()<< endl;
    return 0;
}
