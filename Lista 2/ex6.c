#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //declaração de váriaveis
    float peso, altura, imc;

    //entrada de dados
    printf("Digite seu peso em kg:   ");
    scanf("%f", &peso);
    printf("Digite sua altura em cm:   ");
    scanf("%f", &altura);
    
    //manipulação de dados
    imc = peso / (altura/100 * altura/100);

    //saída de dados
    printf("Seu IMC é %f", imc);

    return 0;
}