#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num, fatorial = 1;
    printf("Digite um numero para calcular a fatorial:   ");
    scanf("%d", &num);
    
    while(num != 0){
        fatorial = fatorial*num;
        num--;
    }

    printf("\nA fatorial do número é %d", fatorial);
    return 0;
}