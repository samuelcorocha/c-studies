#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int num, media, contador = 0;
    float soma = 0;
    srand(time(0));

    printf("Cem números de 1 a 100: ");
    for(int i = 0; i < 100 ; i++){
        num = (rand()%100) + 1;
        printf("%d ", num);

        if (num%2!=0){
            soma = soma + num;
            contador++;
        }
        
    }

    media = (float)soma / contador;

    printf("\nA soma dos numeros impares: %.0f\nA média dos numeros: %f", soma, media);
    return 0;
}