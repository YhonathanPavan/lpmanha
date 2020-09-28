#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 5
#define C 3
int main()
{
    srand(time(NULL));
    int matriz[L][C];
    int i, j;
    for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            matriz[i][j] = rand() % 100;
            printf("%2d |", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
