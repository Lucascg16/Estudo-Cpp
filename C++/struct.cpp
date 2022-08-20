#include <iostream>

using namespace std;

struct pessoa
{ // seria isso um objeto???
    int id;
    string nome;
    long cpf;
    int idade;
};

int main()
{
    pessoa cliente;
    int numero = 0;
    numero += 1;

    cliente.id = 1;
    cout << "Digite o nome do cliente:" << endl;
    cin >> cliente.nome;

    cout << "digite o cpf:" << endl;
    cin >> cliente.cpf;

    cout << "digite a idade:" << endl;
    cin >> cliente.idade;

    cout << cliente.id << endl;
    cout << cliente.nome << endl;
    cout << cliente.cpf << endl;
    cout << cliente.idade << endl;
    return 0;
}