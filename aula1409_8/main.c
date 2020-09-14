#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    while(x % 30 != 0){
        printf("Valor de x: %d \n", x);
        x++;
    }
    return 0;
}
