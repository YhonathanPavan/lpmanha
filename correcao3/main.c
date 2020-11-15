/*
Fazer um programa em C que dados N n�meros onde cada (0<=N<100)
mostre a somat�ria de todos os n�meros �mpares entrados pelo usu�rio.
A condi��o de parada � a entrada do n�mero 0.
Coloque o c�digo do programa abaixo:
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
