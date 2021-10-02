#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //bilbioteca para localizar o código

int main(int argc, char const *argv[])
{
    //comando para importar caracteres do português, como os acentos.
    setlocale(LC_ALL, "portuguese");

    //declaração de variaveis
    int n, p, q, aux = 0;

    //instrução para entrada do usuário
    printf("Digite valores inteiros positivos abaixo\n");

    //laço de repetição que verifica a entrada do usuário e rejeita valores errados
    while (aux == 0)
    {
        printf("Digite o valor de n:    ");
        scanf("%d", &n);
        printf("Digite o valor de p:    ");
        scanf("%d", &p);
        printf("Digite o valor de q:    ");
        scanf("%d", &q);

        if(n >= 0 && p >= 0 && q >= 0){
            aux++;
        }else{
            printf("Um dos valores é inválido, tente novamente!\n");
        }
    }

    //laço de repetição que executa o comando principal da questão, vendo se os números de 1-n são divisíveis por p e q ao mesmo tempo
    for(int i = 1; i <= n; i++){
        if(i%p==0 && i%q==0){
            printf("%d é divisível por %d e %d\n", i, p, q);
        }else{
            printf("%d não é divisível por %d e %d ao mesmo tempo\n", i, p, q);
        }
    }
    return 0;
}