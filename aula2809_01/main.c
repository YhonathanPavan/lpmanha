#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10];
    int i;
    //alimentar o vetor com dados do usuario
    for(i=0; i<10; i++){
        printf("Digite o valor da posicao %d \n", i);
        scanf("%d", &v[i]);
    }
    //exibir os dados do vetor
    for(i=0; i<10; i++){
        printf("Vetor na posicao [%d] ====>  [%d] \n",i, v[i]);
    }

    return 0;
}
