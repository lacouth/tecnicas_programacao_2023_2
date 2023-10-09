#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

using namespace std;

struct Personagem{
    string nome;
    int vida;
    void detalhes(){
        cout << nome << " possui " << vida << " pontos de vida" << endl;
    }
    void atacar(Personagem &alvo){
        int dano = rand() % 20 + 1;
        cout << nome << " atacou " << alvo.nome << " com um dano de " << dano << endl;
        alvo.vida -= dano;
        if(alvo.vida < 0){
            alvo.vida = 0;
        }
        alvo.detalhes();
        this_thread::sleep_for(chrono::seconds(5));
    }
};


int main()
{
    srand(time(NULL));
    Personagem cavaleiro = {"Cavaleiro", 100};
    Personagem goblin = {"Goblin", 100};
    int round = 1;
    cavaleiro.detalhes();
    goblin.detalhes();

    while(cavaleiro.vida > 0 and goblin.vida > 0){
        system("clear");
        cout << "Round " << round << endl;
        round++;
        cavaleiro.atacar(goblin);
        if(goblin.vida > 0){
            goblin.atacar(cavaleiro);
        }
    }
    Personagem campeao = cavaleiro.vida > 0 ? cavaleiro : goblin;


    cout << campeao.nome << " ganhou a batalha!" << endl;


    return 0;
}
