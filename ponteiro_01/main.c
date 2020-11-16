#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int y = 17;
    int * p_x = &x;
    int * p_y = &y;

    printf("O que interessa sempre sao os dados \n");
    printf("Valor de x:   %d  \n", x);
    printf("Valor de y:   %d  \n", y);
    printf("Valor de x pelo ponteiro p_x:   %d \n", *p_x);
    printf("Valor de y pelo ponteiro p_y:   %d \n", *p_y);
    return 0;
}
