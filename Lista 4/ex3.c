#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
 
int main() {
    setlocale(LC_ALL, "portuguese");

    int numero, algarismo, digito, aux = 1;

    printf("Digite um número:   ");
    scanf("%d", &numero);
    printf("Digite a casa do algarismo desejado:   ");
    scanf("%d", &algarismo);

    for(int i = 0; i < algarismo; i++){
        aux = pow(10, i);
    }
    digito = (numero / aux) % 10;
    
    printf("%d", digito);

    return 0;
}