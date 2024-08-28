#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  
    char palavra1[20], palavra2[20];

    printf("Digite uma palavra (string): ");
    
    fgets(palavra1, sizeof(palavra1), stdin);


    strcpy(palavra2, palavra1);

    printf("A palavra digitada foi: %s, copiada de outra string)", palavra2);
    
    return(0);
}
