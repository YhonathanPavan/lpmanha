#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    char letra;
    //antes da entrada do tipo char (caracteres ou strings)
    fflush(stdin);
    printf("Digite 'm' para masculino ou 'f' para feminino: \n");
    scanf("%c", &sexo);
    fflush(stdin);
    printf("Digite a primeira letra do nome do cliente: \n");
    scanf("%c", &letra);
    if(sexo=='m' || sexo=='M'){
        printf("Masculino \n");
    }else{
        printf("Feminino \n");
    }
    printf("Primeira letra do nome: %c \n", letra);
    return 0;
}
