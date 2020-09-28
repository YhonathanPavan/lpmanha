#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    int v[] = {10,20,30, 40, 50}; //carga inicial (pouco usual)
    int i;
    for(i=0; i<T; i++){ //apresentou dados incosistencia
       printf("Valor: %d \n", v[i]);
    }
    return 0;
}
