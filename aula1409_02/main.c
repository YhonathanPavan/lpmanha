#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salarioBruto;
    char estadoCivil;
    printf("Digite o salario bruto: \n");
    scanf("%lf", &salarioBruto);
    fflush(stdin); //limpar buffers do teclado
    printf("Digite (c) para casado ou outra letra para solteiro: \n");
    estadoCivil = getchar();
    //usando if ternario.
    double imposto = estadoCivil == 'c' ? salarioBruto * 0.09 : salarioBruto * 0.1;
    printf("Salario Bruto:  %.2f \n", salarioBruto);
    printf("Imposto: %.2f \n", imposto);
    return 0;
}
