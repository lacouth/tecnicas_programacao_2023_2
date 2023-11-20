#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> numeros;

    numeros.insert(42);
    numeros.insert(66);
    numeros.insert(13);
    numeros.insert(8);
    numeros.insert(42);
    numeros.insert(8);
    numeros.insert(100);
    numeros.insert(70);
    numeros.insert(55);
    numeros.insert(40);
    numeros.insert(15);

    numeros.erase(8);
    numeros.insert(9);

    auto menor = numeros.lower_bound(10);
    auto maior = numeros.upper_bound(70);

    cout << "Valores na faixa 10 e 70\n";
    for(auto i = menor; i != maior; i++){
        cout << *i << " ";
    }

    cout << endl;

    cout << "Quantidade de valores: " << numeros.size()<<endl;

    for(int numero : numeros){
        cout << numero << " ";
    }

    return 0;
}
