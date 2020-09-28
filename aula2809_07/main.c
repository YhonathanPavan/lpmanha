#include <stdio.h>
#include <stdlib.h>
#define T 10
int main()
{
    int va[10] = {3, 5, 7, 9, 2, 4, 6, 8, 0, 1};
    int vb[10];
    int i;
    for(i=0; i<T; i++){
        if(i % 2 ==0){
            vb[i] = va[i] * 5;
        }else{
            vb[i] = va[i] + 5;
        }
    }
    for(i=9; i>=0; i--){
        printf("%3d | ", va[i]);
    }
    printf("\n");
    for(i=9; i>=0; i--){
        printf("%3d | ", vb[i]);
    }
    return 0;
}
