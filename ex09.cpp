#include <stdio.h>
#include <stdlib.h>


int main(){
	const float gasolina = 5.79;
	float litros, calculo;
	
	printf("Quantos litros? ");
	scanf("%f", &litros);
	
	calculo = litros * gasolina;
	
	printf("O valor total a ser pago: R$ %2.f", calculo);
}
	
	
		
