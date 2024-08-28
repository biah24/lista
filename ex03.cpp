#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float base, expoente, resultado;
	printf("Digite a base: ");
	scanf("%f", &base);
	printf("Digite o expoente: ");
	scanf("%f", &expoente);
	
	resultado = pow(base, expoente);
	
	printf("O numero %f, elevado a: %f e igual a: %f", base, expoente, resultado);
	
}
