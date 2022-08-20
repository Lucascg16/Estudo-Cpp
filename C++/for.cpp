#include <iostream>
#include <conio.h>

using namespace std;

int main () {
//apesar da indicacao diferente no automatico da linguagem, o for e literalmente o mesmo de java
    
   /* for (size_t i = 0; i < count; i++)
    {
       // a posicao desses chaves nao da kkk
    }
    */ 
    for(int i = 0; i < 10; i++){

        for(int j = 0; j < 10 ; j++){
            cout <<  j << " ";
            getch();//seria isso um debug???
        }
        cout << "" << endl;
        //getch();//seria isso um debug???
    }
    
    return 0;
}
