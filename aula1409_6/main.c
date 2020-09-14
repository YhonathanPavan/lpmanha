#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //simulacao até gerar um numero aleatorio modulo 27
    //exemplo de um laco infinito.
    srand(time(NULL));
    int i, gerado;
    for(i=1;;i++){
        gerado = rand();
        if(gerado % 27 ==0) break;
    }
    printf("Quantas tentativas para encontrar um numero divisel por 27 \n");
    printf("Numero gerado que satisfez a cond: %d \n", gerado);
    printf("%d", i);
    return 0;
}
