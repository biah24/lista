
#include <stdio.h>
#include <stdlib.h>
int main(){

float n1, n2, n3, p1, p2, p3;
float mediaPonderada;

printf ("Digite n1: ");
scanf("%f", &n1);
printf("Digite p1: ");
scanf("%f", &p1);
printf ("Digite n2: ");
scanf("%f", &n2);
printf ("Digite p2: ");
scanf("%f", &p2);
printf ("Digite n3: ");
scanf("%f", &n3);
printf ("Digite p3: ");
scanf("%f", &p3);

mediaPonderada = (n1*p1) + (n2*p2) + (n3*p3) / (p1), (p2), (p3);

printf("A media ponderada: %f", mediaPonderada);





}
