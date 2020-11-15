#include <stdio.h>
#include <stdlib.h>
#include "cabec.h"



int main()
{
    int x, y;
    printf("Entre com dois dados (x) e (y):  \n");
    scanf("%d%d", &x, &y);

    printf("Soma dos valores: %d  \n", somar(x, y));

    printf("Subtracao  dos valores: %d  \n", subtrair(x, y));

    printf("Multiplicacao  dos valores: %d  \n", multiplicar(x, y));

    printf("Divisao  dos valores: %d  \n", dividir(x, y));
    return 0;
}

