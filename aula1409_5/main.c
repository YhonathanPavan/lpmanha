#include <stdio.h>
#include <stdlib.h>

int main()
{
    // tabuada generica
    int i, tab, num;
    printf("Deseja a tabuada de qual numero: \n");
    scanf("%d", &num);
    for(i=1; i<=10; i++){
        tab = num * i;
        printf("%3d  X  %3d  =  %3d  \n",num,  i, tab);
    }
    printf("Fim");
    return 0;
}
