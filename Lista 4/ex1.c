#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "portuguese");

    float soma = 0;
    int num;

    printf("Insira um valor N:  ");
    scanf("%d", &num);

    printf("S = ");
    for (int i = 1; i <= num; i++){
        soma += 1.0/i;

        if(i == num){
            printf("1 / %d = ", i);
        }else{
            printf("1 / %d + ", i);
        }
        
    }

    printf("%f", soma);
    
    return 0;
}