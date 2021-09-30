#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //declaração de váriaveis
    int numero;
    int posterior;

    //entrada de dados
    printf("Digite um número inteiro:   ");
    scanf("%d", &numero);

    //manipulação de dados
    posterior = numero + 1;

    //saída de dados
    printf("O sucessor de %d é %d", numero, posterior);

    return 0;
}
