#include <stdio.h>
#include <stdlib.h>


int strcountc(char *palavra, char letra);
int main()
{
    char nome[21] = "Marcos";
    char sobrenome[21] = "Moraes";
    char completo[42] = {'\0'};

    strcat(completo, nome);
    strcat(completo, " ");
    strcat(completo, sobrenome);

    int x = strcountc("abacate", 'a');
    printf("Nome completo:   %s   \n", completo);


    printf("Tem %d letras a na palavra abacate: \n", x);
    return 0;
}

int strcountc(char *palavra, char letra){
    int i;
    int cont=0;
    for(i=0; i<strlen(palavra); i++){
        if(letra == palavra[i]) cont++;
    }
    return cont;
}
