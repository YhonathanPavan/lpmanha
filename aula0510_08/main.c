#include <stdio.h>
#include <stdlib.h>
#define T 8
#define C 3
int main()
{
    int ra[T];
    double notas[T][C];
    int i, j;
    for(i=0; i<T; i++){
        printf("Digite o ra do aluno: \n");
        scanf("%d", &ra[i]);
        for(j=0; j<2; j++){
            printf("Digite a nota do aluno de ra: %d \n", ra[i]);
            scanf("%lf",&notas[i][j]);
        }
        notas[i][2] = (notas[i][0] + notas[i][1])/ 2.0;
    }
    for(i=0; i<T; i++){
        printf("Aluno de ra: %d tem media %lf \n", ra[i], notas[i][2]);
    }
    return 0;
}
