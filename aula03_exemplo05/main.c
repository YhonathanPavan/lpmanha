#include <stdio.h>
#include <stdlib.h>

//comando switch
int main()
{
    int opcao;
    printf("Menu do Restaurante \n");
    printf("1.. File com Molho Gorgonzola \n");
    printf("2.. File ao Molho Madeira \n");
    printf("3.. File a parmegiana \n");
    printf("Digite sua opcao \n");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
        printf("Escolheu File com Gorgonzola\n");
        break;
    case 2:
        printf("Escolheu File ao Molho Madeira\n");
        break;
    case 3:
        printf("Escolheu File a parmegiana \n");
        break;
    default:
        printf("Opcao invalida \n");
    }
    return 0;
}
