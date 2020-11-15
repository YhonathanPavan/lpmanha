#include <stdio.h>
#include <stdlib.h>

int maiorValor(int x, int y);

int main()
{
    int a = 10, b = 10;
    int resultado = maiorValor(a, b);
    printf("Resultado: %d  \n", resultado);
}

int maiorValor(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
