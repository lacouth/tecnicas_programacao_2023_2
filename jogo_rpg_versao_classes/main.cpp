#include <iostream>
#include "personagem.h"
#include "guerreiro.h"


using namespace std;

int main()
{
    Personagem p1;
    Personagem p2("Felca");
    Guerreiro p3("Neto", 90, 13);
    int ataqueTurno;
    cout << p1.apresentar() << endl
         << p2.apresentar() << endl
         << p3.apresentar() << endl;

    ataqueTurno = p2.calcularAtaque();
    p3.defender(ataqueTurno);

    ataqueTurno = p3.calcularAtaque();
    p2.defender(ataqueTurno);

    p3.status();
    p2.status();


    return 0;
}
