#include "album.h"

string Album::getNomeAlbum() const
{
    return nomeAlbum;
}

void Album::setNomeAlbum(const string &newNomeAlbum)
{
    nomeAlbum = newNomeAlbum;
}

string Album::getArtista() const
{
    return artista;
}

void Album::setArtista(const string &newArtista)
{
    artista = newArtista;
}

int Album::getAno() const
{
    return ano;
}

void Album::setAno(int newAno)
{
    ano = newAno;
}

string Album::apresentar_csv()
{
    string resultado = this->nomeAlbum + "," +
                       this->artista + "," +
                       to_string(this->ano);
    return resultado;
}

Album::Album()
{

}

Album::Album(string album, string art, int ano)
{
    this->nomeAlbum = album;
    this->artista = art;
    this->ano = ano;

}
