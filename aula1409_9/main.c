#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc;
    //normalmente usamos o do para validacoes de entrada
    do{
        system("cls");
        printf("1.. Bigmac \n");
        printf("2.. Coca cola \n");
        printf("3.. Fanta \n");
        printf("Escolha opcao: \n");
        scanf("%d", &opc);
    }while(opc < 1 || opc > 3);

    switch(opc){
    case 1:
        printf("Bigmac custa 10.00 \n");
        break;
    case 2:
        printf("Coca cola 5.00 \n");
        break;
    case 3:
        printf("Fanta 5.00 \n");
    }
    return 0;
}
