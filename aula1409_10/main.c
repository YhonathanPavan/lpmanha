#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* ESCREVA UM ALGORÍTIMO PARA GERAR UMA PA*/
   int a1 = 1;
   int n = 10;
   int an;
   int r ;
   printf("Digite a razao da PA: ");
   scanf("%d",& r);
   printf(" Os 10 termos da PA sao: \n");
   for ( a1= 1; a1<=10; a1++) {
   an= a1*(n-1)*r;
    printf("%d \n", an);
   }

    return 0;
}
