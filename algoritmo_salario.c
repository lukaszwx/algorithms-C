#include <stdio.h>
#include <stdlib.h>
float salario;
char nome[50];
int main(){
	printf("Digite seu nome\n");
	scanf("%s", &nome);
	printf("Digite o salario\n");
	scanf("%f",&salario);
	if (salario>1800 && salario<=8000){
		printf("Salario valido para financiamento,%s:\n",nome);
}else{
	printf("Salario fora da faixa permitida para financiamento\n");
	
		
	}
}