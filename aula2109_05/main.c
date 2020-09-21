#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maior, menor, i, soma=0;
    float media;
    for(i=0; i<5; i++){
        printf("Digite um valor: \n");
        scanf("%d", &n);
        if(i==0){
            maior = n;
            menor = n;
        }
        if(n > maior) maior = n;
        if(n < menor) menor = n;
        soma += n;
    }
    media = soma / 5.0;
    printf("Maior valor: %d \n", maior);
    printf("Menor valor: %d \n", menor);
    printf("Media de valores: %.2f \n", media);
    return 0;
}
