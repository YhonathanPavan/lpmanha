#include <stdio.h>
#include <stdlib.h>
#define T 5
int main()
{
    int v[T];
    int i, j, aux;
    for(i=0; i<T; i++){
        printf("Digite um valor: \n");
        scanf("%d", &v[i]);
    }
    for(i=0; i<T; i++){
        for(j=i+1; j<T; j++){
           if(v[i] > v[j]){
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
           }
        }
    }
    for(i=0; i<T; i++){
        printf(" %3d | ", v[i]);
    }
    printf("\n");
    return 0;
}
