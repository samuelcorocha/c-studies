#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "portuguese  ");

    float soma = 0;
    int num, denominador;

    printf("Insira um valor N:  ");
    scanf("%d", &num);

    denominador = num;

    printf("S = ");
    for (int i = 1; i <= num; i++){

        if(i%2==0){
            printf("- %d / %d ", i, denominador);
            soma -= (float)i/denominador;
        }else{
            printf("+ %d / %d ", i, denominador);
            soma += (float)i/denominador;
        }
        
        denominador--;
    }

    printf("= %f", soma);
    
    return 0;
}