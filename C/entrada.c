#include <stdio.h>
#include <conio.h>

int main(void) {

    char nome[30];

    printf("digite qualquer coisa em ate 30 letras:");
    gets(nome);

    printf("a string digitada foi: %s", nome);// vale a analise de ser %s e nao %d como da outra forma vista
    //vale lembrar que a outra forma de entrada usada em c esta no idade.c
    return 0;
}