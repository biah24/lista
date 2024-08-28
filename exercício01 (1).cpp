#include <stdio.h>

int main(){

int a;
int b;
int c;
float valorDelta;



	printf("Digite o valor a: ");
	scanf("%d", &a);
	printf("Digite o valor b: ");
	scanf("%d", &b);
	printf("Digite o valor c: ");
	scanf("%d", &c);

valorDelta = b*b - 4 * a * c;

	printf("Delta igual a: %f", valorDelta);


}
