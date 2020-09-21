#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, res;
    printf("Digite o valor desejado:  \n");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
        res = i * n;
        if(res % 3 ==0) continue;
        printf("[%2d] X [%2d] = [%2d] \n", n, i, res);
    }
    return 0;
}
