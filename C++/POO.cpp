#include <iostream>
#include <string>

using namespace std;

class pessoa
{        // modelagem do objeto, bem parecido em java tambem
private: // o que sera privado no objeto
    int id;
    string nome;
    int idade;

public: // metodos publicos para manipulacao do objeto
    pessoa(int _id, string _nome, int _idade)
    {
        id = _id;
        nome = _nome;
        idade = _idade;
    }

    void getNome()
    {
        cout << nome << endl;
    }

    void setNome(string _nome)
    { // o underline indica uma variavel temporaria
        nome = _nome;
    }
    ~pessoa(){//destructor, usado para remover a classe da memoria
        cout << "Fechando classe" << endl;
    }
};//nao implementei todos os metodos pois esse e um codigo de exemplo

int main()
{
    pessoa amigo = pessoa(1, "predo", 20);

    amigo.getNome();
    amigo.~pessoa();

    return 0;
}