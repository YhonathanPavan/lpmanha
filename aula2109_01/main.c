#include <stdio.h>
#include <stdlib.h>

int main()
{
    int razao;
    printf("Digitar a razao para o exercicio: \n");
    scanf("%d", &razao);
    printf("-----------------\n");
    printf("Serie: \n");
    int serie = 1;
    int i;
    for(i=1; i<=10; i++){
        printf("%d \n", serie);
        serie += razao;
    }
    return 0;
}
