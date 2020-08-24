#include <stdio.h>
#include <stdlib.h>
//Escopo Global. Voce pode usa-la em qualquer do programa
int x = 12;

int main()
{
    mostrar();
    exibir(99);
    printf("Valor de x: %d \n", x);
    return 0;
}

void mostrar()
{
    //escopo local
    int x = 25;
    printf("Valor de x: %d \n", x);
}
void exibir(int x)
{
    printf("Valor de x: %d \n", x);
}


