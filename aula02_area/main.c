#include <stdio.h>
#include <stdlib.h>
#define PI 3.151
/*-----------------------------------*
* Exerc�cio slide 27 (aula 2)        *
* C�lculo da �rea e per�metro        *
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
