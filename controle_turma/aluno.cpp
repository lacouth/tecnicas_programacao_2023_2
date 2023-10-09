#include "aluno.h"

float Aluno::getMedia() const
{
    return media;
}

Aluno::Aluno()
{

}

void Aluno::aumentar_nota(float valor)
{
    if(valor >= 0 and this->media + valor <= 100){
        this->media += valor;
    }
}

void Aluno::reduzir_nota(float valor)
{
    if(valor >= 0 and this->media - valor >= 0){
        this->media -= valor;
    }
}
