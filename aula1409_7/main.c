#include <stdio.h>
#include <stdlib.h>

int main()
{
    //loop sem conteudo
    int i;
    printf("Comecou o programa \n");
    //apenas para gerar tempo
    printf("Apito \a\n");
    for(i=0; i<2000000000; i++);
    printf("Apito \a\n");
    printf("Acabou a espera \n");
    return 0;
}
