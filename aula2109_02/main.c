#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma = 0;
    do{ //laco da repeticao principal (somatoria)
        do{ //validacao da entrada
            printf("Entre com um valor ou 0 para sair: \n");
            scanf("%d", &n);
        }while(n<0 || n>19);

        soma+= n;
    }while(n!=0);
    printf("Somatoria: %d !\n", soma);
    return 0;
}
