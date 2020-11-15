/*
Fazer um programa em C que dados N números onde cada (0<=N<100)
mostre a somatória de todos os números ímpares entrados pelo usuário.
A condição de parada é a entrada do número 0.
Coloque o código do programa abaixo:
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int soma = 0;
    do{
        //validacao
        do{
            printf("Digite o valor de n: \n");
            scanf("%d", &n);
        }while(n<0 || n>=100);
        if(n % 2 == 1){
            soma+= n;
        }
    }while(n!=0);
    printf("Soma dos impares: %d \n", soma);
    return 0;
}
