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
Não haverá saída pois há um erro de compilação
Imprimirá: orrocos socorro - 15 [V]
Imprimirá: socorro orrocos - 15
Imprimirá: orrocos socorro - 14
Imprimirá: socorro orrocos - 14
*/
