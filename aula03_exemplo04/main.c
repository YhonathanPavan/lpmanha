#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novoSalario;
    printf("Digite o valor do salario: \n");
    scanf("%f", &salario);
    novoSalario = salario < 2000 ? salario * 1.10 : salario * 1.09;
    printf("Novo salario %.2f \n", novoSalario);
    return 0;
}
