#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int a, b, aux;

    cout << "Digite o primeiro valor: ";
    cin >> a;

    cout << "Digite o segundo valor: ";
    cin >> b;

    cout << "O primeiro valor digitado foi: " << a << endl;
    cout << "O segundo valor digitado foi: " << b << endl;

    aux = a;
    a = b;
    b = aux;

    cout << "O primeiro valor trocado com o segundo: " << a << endl;
    cout << "O segundo valor trocado com o primeiro: " << b << endl;

    getch();//eu acho melhor usar um while nesse caso mas aqui vai isso mesmo
    cout << "Finalizando...";
    
    return 0;
}