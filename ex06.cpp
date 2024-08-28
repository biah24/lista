

#include <stdio.h>
#include <stdlib.h>

int main(){

	int idade;
	char nome[20];
	printf("Informe seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	


printf("Ola %s, seja bem-vindo(a) ao curso de Algoritimos e Programacao Estruturada. Você tem: %d de idade", nome, idade );
 return(0);

}
