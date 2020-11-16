#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int *p_x = &x;

    int **p_p_x = &p_x;

    printf("Valor de x:  %d \n", x);
    printf("Valor de x:  %d \n", *p_x);
    printf("Valor de x:  %d \n", **p_p_x);
    return 0;
}
