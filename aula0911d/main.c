#include <stdio.h>
#include <stdlib.h>
#include "cabec.h"

int main()
{
    int x, y, z;
    printf("Digite tres valores: \n");
    scanf("%d%d%d", &x, &y, &z);
    if(ehTriangulo(x, y, z)==1){
        printf("Forma um triangulo \n");
        qualTriangulo(x, y, z);
    }else{
        printf("Nao forma um triangulo \n");
    }
    return 0;
}
