#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i = 0; i < 100; i++){
        if(i % 3 == 0) continue;

        printf("Valor de i: %d  \n", i);
    }

    return 0;
}
