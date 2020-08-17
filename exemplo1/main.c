#include <stdio.h>
#include <stdlib.h>

//escopo do programa principal (global)
int a = 9;

//escopo do main
int main()
{
    //escopo local
    int a = 10;
    printf("%d \n", a);
    printf("%d \n ", somar(15));
    return 0;
}
int somar(int x){
    return a + x;
}
