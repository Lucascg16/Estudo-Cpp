#include <iostream>
#include <typeinfo>

using namespace std;

template<class tipodado>// funcao generica que recebe um dado generico
tipodado funcao(tipodado a);//parece legal mas eu nao consigo ver utilidade pra isso

int main (){
    funcao( 10 );
    funcao( 2.3 );

    return 0;
}

template<class tipodado>//a linguagem te obriga a mantar a mesma coisa em cima e em baixo
tipodado funcao(tipodado a){// vou demorar pra engolir isso
    if( typeid(a).name() == typeid(int).name()){
        cout << "Inteiro" << endl;
    }
    if( typeid(a).name() == typeid(double).name()){
        cout << "Double" << endl;
    }
    
    return ++a;
}