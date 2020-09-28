#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 10
int main()
{
    srand(time(NULL));
    //vetor conter dados aleatorios em uma faixa (valor 0 e valor maximo 999)
    int vetor[T] = {};
    int i;
    //apresentar zerado
    for(i=0; i<T; i++){
        printf("Posicao [%3d] ===> [%3d]\n", i, vetor[i]);
    }
    //gerar valores aleatorios
    for(i=0; i<T; i++){
        vetor[i] = rand() % 1000;
    }
    //apresentar com os dados aleatorios
    for(i=0; i<T; i++){
        printf("Posicao [%3d] ===> [%3d]\n", i, vetor[i]);
    }
    return 0;
}
