#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int magico;
    int chute;
    magico = rand();
    while(1){
        printf("Digite um numero \n");
        scanf("%d", &chute);
        if(magico == chute){
            printf("Cara sortudo \n");
            return 0;
        }else{
            printf("Nao foi desta vez \n");
            if(magico > chute){
                printf("Numero magico e maior \n");
            }else{
                if(){

                }
                printf("Numero magico e menor \n");
            }
        }
    }
}
