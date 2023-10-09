#include <iostream>
#include "pessoa.h"

using namespace std;

int main()
{
    string nome;
    int ano;

    cout << "Informe o nome: ";
    cin >> nome;
    cout << "Informe o ano de nascimento: ";
    cin >> ano;

    Pessoa pessoa(nome,ano);

    cout << pessoa.apresentar() << endl;
    return 0;
}
