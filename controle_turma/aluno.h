#ifndef ALUNO_H
#define ALUNO_H

#include <string>

using namespace std;

class Aluno{
private:
    float media = 0;
public:
    Aluno();
    string nome;
    string matricula;
    void aumentar_nota(float valor);
    void reduzir_nota(float valor);
    float getMedia() const;
};

#endif // ALUNO_H
