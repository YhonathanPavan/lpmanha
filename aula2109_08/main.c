#include <stdio.h>
#include <stdlib.h>

int main()
{
    int letra;
    for(letra=0; letra<=255; letra++){
        printf("Dec: %d, Caraceter: %c \n", letra, letra);
    }
    return 0;
}
