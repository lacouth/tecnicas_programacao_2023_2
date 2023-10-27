#ifndef ALBUM_H
#define ALBUM_H
#include <string>

using namespace std;

class Album
{
private:
    string nomeAlbum;
    string artista;
    int ano;
public:
    Album();
    Album(string album, string art, int ano);
    string getNomeAlbum() const;
    void setNomeAlbum(const string &newNomeAlbum);
    string getArtista() const;
    void setArtista(const string &newArtista);
    int getAno() const;
    void setAno(int newAno);
    string apresentar_csv();
};

#endif // ALBUM_H
