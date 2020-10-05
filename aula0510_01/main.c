#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[41];
    fflush(stdin);//sempre antes de char ou string
    printf("Entre com o nome completo da pessoa: \n");
    gets(nome);
    char nome2[41];
    fflush(stdin);
    printf("Entre com o nome completo de outra pessoa: \n");
    gets(nome2);
    printf("O nome digitado foi %s \n", nome);
    printf("O outro nome digitado foi %s \n", nome2);
    return 0;
}
