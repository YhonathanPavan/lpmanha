#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
    char nome[51];
    char email[61];
    double salario;
};

int main()
{
    struct Pessoa amigo;
    //struct Pessoa vetPessoas[100];
    fflush(stdin);
    printf("Digite o nome da pessoa:  \n");
    gets(amigo.nome);
    fflush(stdin);
    printf("Digite o email da pessoa:  \n");
    gets(amigo.email);
    printf("Digite o salario da pessoa: \n");
    scanf("%lf", &amigo.salario);
    printf("Imprimir os dados do amigo: \n");
    printf("Nome do amigo: %s \n", amigo.nome);
    printf("Email do amigo: %s \n", amigo.email);
    printf("Salario do amigo: %.2f \n", amigo.salario);

    return 0;
}
