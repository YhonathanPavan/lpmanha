#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    char *ptr= &s; /* aponta para o 1o. caractere de s*/
    printf("Introduza uma string: ");
    gets(s);
    if(*ptr== '\0') return;
    /*Imprimir string normalmente */
    while(*ptr!='\0')
        putchar(*ptr++);
    printf("\n\n");
    /*Imprimir ao contrário */
    ptr--; //por causa do '\0'
    while(ptr>=s) /*Enquanto ptrfor >=que &s[0] */
        putchar(*ptr--);

    ptr= &s;
    printf("\n\n");
    return;
}
