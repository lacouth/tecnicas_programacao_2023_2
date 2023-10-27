#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> valores;
    int temp;
    float acumulador = 0;
    while(cin >> temp){
        valores.push_back(temp);
    }
    cout << "Foram inseridos " << valores.size() << " valores\n";
    cout << "Valores inseridos: \n";
    for(int valor : valores){
        cout << valor << " ";
        acumulador += valor;
    }
    sort(valores.begin(), valores.end());
    cout << "A média dos valores é " << acumulador / valores.size() << endl;
    cout << "Valores inseridos: \n";
    for(int valor : valores){
        cout << valor << " ";
        acumulador += valor;
    }
    return 0;
}
