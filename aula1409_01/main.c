#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salarioBruto, salarioLiquido, imposto;
    printf("Digite o valor do salario bruto: \n");
    scanf("%lf", &salarioBruto);
    if(salarioBruto < 1000.0){
        imposto = salarioBruto * 0.05;
    }else {
        if(salarioBruto < 5000.0){
            imposto = salarioBruto * 0.11;
        }else{
            imposto = salarioBruto * 0.35;
        }
    }
    salarioLiquido = salarioBruto - imposto;
    printf("Salario Bruto: %.2f \n", salarioBruto);
    printf("Salario Liquido: %.2f \n", salarioLiquido);
    printf("Imposto: %.2f \n", imposto);
    return 0;
}
