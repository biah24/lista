//Fa�a um programa que calcule o valor a ser pago em uma conta de energia el�trica,
//sabendo que o pre�o por KWh � fixo (0.50) e deve ser armazenado em uma constante. O
//programa deve apresentar a seguinte mensagem (O valor da conta de energia �: R$
//<valor>). Observa��o: o valor final deve possuir tr�s casas decimais.

#include <stdio.h>
#include <stdlib.h>


int main(){
	float w, h;
	float calculo, resultado;
	int dia;
	const float KWH = 0.50;
	
	printf("Digite a potencia (W): ");
	scanf("%f", &w);
	printf("Digite quantas horas ficou ligado: ");
	scanf("%f", &h);
	printf("Digite quantos dias ficou ligado: ");
	scanf("%d", &dia);
	
	calculo = w * h * dia / 1000 * KWH;

	
	printf("O valor da conta de energia e de R$ %.3f",calculo );
	
	return 0;
	
}
	
	
	

	
	
	
	
	
	
	
	
	
	
	

