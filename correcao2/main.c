#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
int main()
{
    char word[20] = "socorro";
    char outra[20] = {"\0"};
    strcpy(outra, word);
    strrev(outra);
    strcat(outra, " ");
    strcat(outra, word);
    printf("%s - %d\n", outra, strlen(outra));
    return 0;
}

/*
N�o haver� sa�da pois h� um erro de compila��o
Imprimir�: orrocos socorro - 15 [V]
Imprimir�: socorro orrocos - 15
Imprimir�: orrocos socorro - 14
Imprimir�: socorro orrocos - 14
*/
