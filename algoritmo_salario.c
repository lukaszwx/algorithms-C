#include <stdio.h>

#define TAM_NOME 50
#define SALARIO_MINIMO 1800.0
#define SALARIO_MAXIMO 8000.0

int main(void) {
    char nome[TAM_NOME];
    float salario;

    printf("Digite seu nome: ");
    scanf(" %49[^\n]", nome);

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario > SALARIO_MINIMO && salario <= SALARIO_MAXIMO) {
        printf("\n%s, salario valido para financiamento.\n", nome);
    } else {
        printf("\n%s, salario fora da faixa permitida para financiamento.\n", nome);
    }

    return 0;
}
