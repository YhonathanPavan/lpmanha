#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, imposto;
    char sexo;
    printf("Digite o salario: \n");
    scanf("%lf", &salario);
    fflush(stdin);
    printf("Digite o sexo: (m) masculino e (f) feminino: \n");
    sexo = getchar();
    switch(sexo){
    case 'M':
    case 'm':
        imposto = salario * 0.15;
        break;
    case 'F':
    case 'f':
        imposto = salario * 0.10;
        break;
    default:
        printf("Sexo incorreto \n");
        return 0;
    }
    printf("Salario: %.2f \n", salario);
    printf("Imposto: %.2f \n", imposto);
    return 0;
}
