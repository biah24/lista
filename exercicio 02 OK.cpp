#include <stdio.h>

//Crie um programa que leia dois números de ponto flutuante, calcule e exiba a soma,
//subtração, multiplicação e divisão deles

int main(){
	float x;
	float y;
	float soma;
	float subtracao;
	float multiplicacao;
	float divisao;
	
	printf("Digite n1: ");
	scanf("%f",&x);
	printf("Digite n2: ");
	scanf("%f",&y);
	
	soma = x + y;
	subtracao = x - y;
	multiplicacao = x * y;
	divisao = x / y;
	
	printf ("A soma dos numeros foi igual a: %f\n", soma);
	printf("A subtracao dos numeros foi igual a: %f\n", subtracao);
	printf("A multiplicacao dos numeros foi igual a: %f\n", multiplicacao);
	printf("A divisao dos numeros foi igual a: %f\n", divisao);
	
	
	
	
}
