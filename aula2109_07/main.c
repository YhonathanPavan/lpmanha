#include <stdio.h>
#include <stdlib.h>

int main()
{
    //exemplos de incremento de decremento
    int i=7, j=9, z = 10, d;
    //d = i+ j++ + z++;
    d = i + ++j + ++z;
    int cont = 16;
    printf("Resuldado: %d \n", d);
    printf("Valor de j: %d \n", j);
    printf("Valor de z: %d \n", z);
    return 0;
}
