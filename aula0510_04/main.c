#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[21] = {'\0'};
    printf("Digite uma palavra: \n");
    gets(palavra);
    int tamanho = strlen(palavra);


    printf("Tamanho da palavra: %d \n", tamanho);
    return 0;
}
