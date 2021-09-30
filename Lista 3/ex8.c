#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 1, aux, qtd;

    printf("Digite o número de digitos da Sequência de Fibonacci que deseja aparecer: ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++){
        printf("%d ", a);
        
        aux = a + b;
        a = b;
        b = aux;
    }

    return 0;
}