#include <iostream>

using namespace std;

const int TAM = 5;

void aumentarNotas(int valores[]){
    for(int i = 0; i < TAM; i++){
        valores[i] += 10;
    }
}

void mostrarNotas(int valores[]){
    for(int i = 0; i < TAM; i++){
        cout << valores[i] << " ";
    }
    cout << endl;
}
int main()
{
    int notas[TAM] = {60,50,30,68,55};
    aumentarNotas(notas);
    mostrarNotas(notas);
    return 0;
}
