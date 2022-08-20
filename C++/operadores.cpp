#include <iostream>

using namespace std;

int main(){
    int a, b;
    int soma, menos, vezes;
    float divisao, resto;

    a= 5;
    b = 2;

    soma = a + b;
    menos = a - b;
    vezes = a * b;
    divisao = a / b;
    resto = a % b;
    
    cout << "Adicao: " << soma << endl;
    cout << "Subtracao: " << menos << endl;
    cout << "Multiplicacao: " << vezes << endl;
    cout << "Divisao: " <<divisao << endl;
    cout << "Resto da divisao: " << resto << endl;

    return 0;
}