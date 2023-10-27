#ifndef ITEMBIBLIOTECA_H
#define ITEMBIBLIOTECA_H
#include <string>

using namespace std;

class ItemBiblioteca
{
protected:
    string titulo;
    string autor;
    int anoPublicacao;
public:
    ItemBiblioteca();
    ItemBiblioteca(string titulo, string autor, int ano);
    string mostrarDetalhes();
    int getAnoPublicacao() const;
    void setAnoPublicacao(int newAnoPublicacao);
};

#endif // ITEMBIBLIOTECA_H
