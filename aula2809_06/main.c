#include <stdio.h>
#include <stdlib.h>
#define T 7
int main()
{
    //Uma matriz quadrada de 7x7 do tipo identidade
    int matriz[T][T] = {{0}};
    int i, j;
    //refatorar
    for(i=0; i<T; i++){
        matriz[i][i] = 1;
        for(j=0; j<T; j++){
            printf("%2d |", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
