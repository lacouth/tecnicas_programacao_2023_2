#include <iostream>
#include <set>

using namespace std;

int main()
{
    srand(time(NULL));
    for(int j = 0; j < 10; j++){
        set<int> numeros;
        int valor_aleatorio;

        while(numeros.size() < 6){
            valor_aleatorio = (rand() % 60) + 1;
            numeros.insert(valor_aleatorio);
        }

        for(int i : numeros){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
