#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salarioAtual, aumento;
    printf("Digite o salario atual: \n");
    scanf("%lf", &salarioAtual);
    aumento = salarioAtual > 1000.0 ? salarioAtual * 0.05 : salarioAtual * 0.07;
    printf("Salario Atual: %.2f \n", salarioAtual);
    printf("Aumento: %.2f \n", aumento);
    double novoSalario = salarioAtual  +  aumento;
    printf("Novo Salario: %.2f \n", novoSalario);
    return 0;
}
