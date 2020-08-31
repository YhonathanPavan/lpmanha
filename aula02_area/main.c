#include <stdio.h>
#include <stdlib.h>
#define PI 3.151
/*-----------------------------------*
* Exercício slide 27 (aula 2)        *
* Cálculo da área e perímetro        *
-------------------------------------*/
int main()
{
    float area, perimetro, raio;
    printf("Entre com o valor do Raio \n");
    scanf("%f", &raio);
    area = PI * raio * raio;
    perimetro = 2 * PI * raio;
    printf("Valor da area: %.2f \n", area);
    printf("Valor do perimetro: %.2f \n", perimetro);
    return 0;
}
