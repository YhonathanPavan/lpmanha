#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=9, b;
    int soma=0;
    int idade = 15;
    double salarioBruto = 2000.0;  //camel casing
    printf("Tamanho do tipo: %d \n", sizeof(int));

    printf("Digite um valor para b: \n");
    scanf("%d", &b);
    printf("Valor de a: %d \n", a);
    printf("Valor de b: %d \n", b);

    return 0;
}
