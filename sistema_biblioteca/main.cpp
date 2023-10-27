#include "itembiblioteca.h"
#include <iostream>

using namespace std;

int main()
{
    ItemBiblioteca item("As aventuras de Fulano","Fulano de Tal",1980);

    cout << item.mostrarDetalhes() << endl;
    return 0;
}
