#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[51];
    fflush(stdin);
    printf("Digite uma palavra: \n");
    gets(palavra);
    printf("\n\n");
    int i;
    //.imprimir char a char pulando linha, mas ate onde tem dado real
    for(i = 0; i < strlen(palavra); i++){
        printf("%c \n", palavra[i]);
    }

    return 0;
}
