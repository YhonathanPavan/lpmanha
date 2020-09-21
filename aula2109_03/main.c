#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, cont=0;
    for(i=1; i<=10; i++){
        printf("Digite um valor: \n");
        scanf("%d", &n);
        if(n % 2 ==0) cont++;
    }
    printf("Qtd de pares: %d \n", cont);
    return 0;
}
