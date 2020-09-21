#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fah;
    float c;
    for(fah=1; fah<=100; fah++){
        c = (fah - 32) / 1.8;
        printf("Fah %do.)==> Celsius: %.2f \n", fah, c );
    }
    return 0;
}
