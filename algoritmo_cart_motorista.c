#include <stdio.h>
#include <stdlib.h>
int idade;
char nome[50];
char exame [20];

int main(){
	printf("Digite seu nome\n");
	scanf("%s",&nome);
	printf("Digite a sua idade\n");
	scanf("%i", &idade);
	printf("Voce foi aprovado no exame?\n");
	scanf("%i",&exame);
	
if (aprovado )
if (idade>=18 && idade<=95 && strcmp(exame,"APROVADO") == 0){
	printf("Voce pode possuir a carteira de motorista, %s:\n",nome);
} else{
	printf("Voce nao pode tirar a carteira de motorista, %s:\n",nome);
	
}	
}

