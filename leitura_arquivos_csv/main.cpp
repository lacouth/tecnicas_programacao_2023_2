#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream arquivo;
    double media = 0;
    int contador = 0;
    arquivo.open("/home/lacouth/Downloads/alunos.csv");
    if(arquivo.is_open()){
        string nome;
        string matricula;
        string CRE_str;
        double CRE;
        while(getline(arquivo,nome,',')){
            getline(arquivo,matricula,',');
            getline(arquivo,CRE_str);
            arquivo.ignore();
            CRE = stod(CRE_str);
            media += CRE;
            contador++;
            cout << nome << ", " << matricula << ", " << CRE << endl;
        }
        cout << "A média da turma é: " << media / contador << endl;
        cout << contador << endl;
        arquivo.close();
    }else{
        cout << "Não foi possível abrir o arquivo\n";
    }

    return 0;
}















void alterar_valor(Pessoa &pessoa){
    aluno.nome = "Beltrano";
}


int main(){
    Pessoa aluno;
    aluno.nome = "Beltrano";
    alterar_valor(aluno);
    cout << aluno.nome;

}


