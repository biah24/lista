//Crie um programa que calcule a circunfer�ncia de um c�rculo. Utilize uma constante
//para o valor de Pi. O programa deve apresentar a seguinte mensagem (A circunfer�ncia
//do c�rculo �: <circunferencia>).
#include <stdio.h>
#include <stdlib.h>

int main (){
	const float pi = 3.14;
	float r = 20;
	float c;
	
	c = 2 * pi * r;
	
	printf("A circunferencia do circulo e: %f", c);
}

