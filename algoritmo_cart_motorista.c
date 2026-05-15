#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM_NOME 50
#define TAM_EXAME 20

void converterParaMaiusculo(char texto[]) {
    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = toupper((unsigned char) texto[i]);
    }
}

int main(void) {
    char nome[TAM_NOME];
    char exame[TAM_EXAME];
    int idade;

    printf("Digite seu nome: ");
    scanf(" %49[^\n]", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Voce foi aprovado no exame? Digite APROVADO ou REPROVADO: ");
    scanf(" %19s", exame);

    converterParaMaiusculo(exame);

    if (idade >= 18 && idade <= 95 && strcmp(exame, "APROVADO") == 0) {
        printf("\n%s, voce pode possuir carteira de motorista.\n", nome);
    } else {
        printf("\n%s, voce nao pode tirar carteira de motorista.\n", nome);
    }

    return 0;
}
