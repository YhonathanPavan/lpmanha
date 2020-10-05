#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[51];
    char copia[51];
    printf("Digite um nome: \n");
    gets(nome);

    int i;
    //nao faremos assim
    //for(i =0; i < 51; i++){
    //    copia[i] = nome[i];
    //    if(nome[i] == '\0') break;
    //}
    strcpy(copia, nome);

    printf("Copia:   %s  \n", copia);
    return 0;
}
