#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Valor 0 eh falso
    /*int casado = 0;
    if(casado){
        printf("Sujeito e casado \n");
    }else{
        printf("Sujeito nao e casado \n");
    }*/

    int a, b;
    int resultado;
    printf("Digite o valor de a: \n");
    scanf("%d", &a);
    printf("Digite o valor de b: \n");
    scanf("%d", &b);
    if(b){
        resultado = a / b;
    }else{
        printf("Impossivel dividir por zero \n");
        return 0;
    }
    printf("A divisao inteira resulta em: %d \n", resultado);
    return 0;
}
