#include "itembiblioteca.h"

int ItemBiblioteca::getAnoPublicacao() const
{
    return anoPublicacao;
}

void ItemBiblioteca::setAnoPublicacao(int newAnoPublicacao)
{
    anoPublicacao = newAnoPublicacao;
}

ItemBiblioteca::ItemBiblioteca()
{
    titulo = "sem título";
    autor = "sem nome";
    anoPublicacao = 1970;
}

ItemBiblioteca::ItemBiblioteca(string titulo, string autor, int ano)
{
    if(titulo.size() > 2){
        this->titulo = titulo;
    }else{
        this->titulo = "sem título";
    }

    if(autor.size() > 2){
        this->autor = autor;
    }else{
        this->autor = "sem autor";
    }

    if(ano > 0){
        this->anoPublicacao = ano;
    }else{
        this->anoPublicacao = 1970;
    }


}

string ItemBiblioteca::mostrarDetalhes()
{
    return "Título:" + this->titulo +
            " Autor: " + this->autor +
            " Ano: " + to_string(this->anoPublicacao);

}
