#include <stdio.h>
#include <stdlib.h>
#include "cabec.h"

int main()
{
    float peso;
    float altura;
    float resultado;
    printf ("Calculo do IMC \n");
    printf ("Digite o seu peso: \n");
    scanf("%f", &peso);
    printf("Digite a sua altura: \n");
    scanf("%f", &altura);
    resultado = imc(peso, altura);
    printf("Seu imc é igual a: %2.1f \n", resultado);
    return 0;
}
