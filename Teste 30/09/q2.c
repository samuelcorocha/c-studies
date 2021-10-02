#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //bilbioteca para localizar o código

int main(int argc, char const *argv[])
{
    //comando para importar caracteres do português, como os acentos.
    setlocale(LC_ALL, "portuguese");

    //declaração de variaveis
    int numero, count = 0;
    float positivo = 0, negativo = 0;

    //laço de repetição para entrada de dados
    while(1 < 2){
        scanf("%d", &numero);

        //verificação do número
        if(numero == 0){
            break;
        }else if(numero > 0){
            positivo++;
        }else{
            negativo++;
        }
        count++;
    }

    //calculo de porcentagem
    negativo = (negativo * 100)/ count;
    positivo = (positivo * 100)/ count;

    //saída dos dados pedidos na questão
    printf("%.2f%% dos números são negativos\n", negativo);
    printf("%.2f%% dos números são positivos\n", positivo);

    return 0;
}
