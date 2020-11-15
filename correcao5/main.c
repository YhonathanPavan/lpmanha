/*Fazer um programa em C que calcule escreva a soma dos 30
primeiros termos da seguinte série.
   soma = + 1/1 - 3/2 + 5/3 - 7/4 .. -59/30
Cole o código na respostas.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma = 0;
    int x=1, y;
    for(y = 1; y<=30; y++){
        if(y % 2 == 1){
            soma += (float)x / y;
        }else{
            soma -= (float)x / y;
        }
        x+=2;
    }
    printf("Somatoria %f \n", soma);
    return 0;
}
