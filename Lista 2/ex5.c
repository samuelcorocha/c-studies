#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //declaração de váriaveis
    float n1, n2, n3, soma, media, produto;

    //entrada de dados
    printf("Digite 3 notas:   ");
    scanf("%f %f %f", &n1, &n2, &n3);

    //manipulação de dados
    soma = n1 + n2 + n3;
    media = (n1 + n2 + n3) / 3;
    produto = n1 * n2 * n3;

    //saída de dados
    printf("As notas são %.2f, %.2f, %.2f\n", n1, n2, n3);
    printf("A soma das notas é: %.2f\n", soma);
    printf("A média das notas é: %.2f\n", media);
    printf("O produto das notas é: %.2f", produto);

    return 0;
}