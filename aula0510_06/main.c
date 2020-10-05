#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[21] = "Marcos";
    char b[21] = "Marcos";
    if(strcmp(a, b)==0){
        printf("Sao iguais \n");
    }else{
        printf("Sao diferentes \n");
    }

    return 0;
}
