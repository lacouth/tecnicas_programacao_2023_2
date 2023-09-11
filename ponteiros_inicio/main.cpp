#include <iostream>

using namespace std;

void trocar(int *a, int *b){
    int c;
    c = *b;
    *b = *a;
    *a = c;

}
void trocarCpp(int &a, int &b){
    int c;
    c = b;
    b = a;
    a = c;

}

int main()
{
    int num1 = 10;
    int num2 = 20;

    trocarCpp(num1,num2);
    cout << num1 << endl;
    cout << num2 << endl;


}
