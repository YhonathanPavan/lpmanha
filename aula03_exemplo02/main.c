#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario = 800.0;
    char sexo = 'm';
    if( (salario > 910.0 || sexo == 'f') ){
        printf("faz a operacao \n");
    } else {
        printf("Nao faco a operacao \n");
        printf("vvvv");
    }
    if(sexo=='m') {
        printf("Prezado sr. Bom dia \n");
    }


    return 0;
}
