#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "portuguese");

    int numero, divisores;

    printf("Digite um número:   ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        divisores = 0;

        for(int j = 1; j <= i; j ++){
            if(i%j == 0){
                divisores++;
                if (divisores > 2){
                    break;
                }          
            }
        }
        if(divisores == 2){
            printf("%d ", i);
        }
    }
    return 0;
}