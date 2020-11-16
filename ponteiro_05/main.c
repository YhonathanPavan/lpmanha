#include <stdio.h>
#include <stdlib.h>

int deslocamento(char s[], char letra);
int tamanho(char s[]);
int main()
{
    char palavra[100];
    gets(palavra);
    printf("Qtd de deslocamento: %d   \n", deslocamento(palavra, 'x'));
    printf("Tamanho da palavra: %d  \n", tamanho(palavra));
    return 0;
}
int deslocamento(char s[], char letra){
    char * ptr_s = &s[0];
    while(*ptr_s != '\0'){
        if(*ptr_s == letra) break;
        ptr_s++;
    }
    int qtd = ptr_s - (int)s;
    return qtd;
}
int tamanho(char s[]){
    char * ptr_s = &s[0];
    while(*ptr_s != '\0'){
        ptr_s++;
    }
    int qtd = ptr_s - (int)s;
    return qtd;
}
