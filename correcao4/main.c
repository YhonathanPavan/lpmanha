/*
Sobre manipula��o de strings. Fa�a um programa que receba
do usu�rio um texto de at� 100 caracteres.
Voc� deve ao final, apresentar a quantidade de
vogais existentes neste texto. Coloque o texto abaixo:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int qtd = 0; // contar as vogais
    char palavra[101] = {"\0"};
    fflush(stdin);
    printf("Digite uma palavra: \n");
    gets(palavra);
    int i;
    for(i=0; i<strlen(palavra); i++){
        switch(palavra[i]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            qtd++;
        }
    }
    printf("Total de vogais na palavra: %d \n", qtd);
    return 0;
}
