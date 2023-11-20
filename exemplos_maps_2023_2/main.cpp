#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,string> numeros;

    numeros["2023B0042"] = "Fulano";
    numeros["2023A0012"] = "Beltrano";
    numeros["2023R0055"] = "Cicrano";
    numeros["2023B0042"] = "Maria";


    for(auto elemento : numeros){
        cout << elemento.first << " : " << elemento.second << endl;
    }
    return 0;
}
