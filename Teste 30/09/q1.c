#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //bilbioteca para localizar o código

//declaração de variaveis
double massa, massaInicial=0;
int  count = 0, h, min, s, resto;

int calcularHora(seg){  //Transformando os segundos totais em horas, minutos e segundos
    h = seg / 3600;
    resto = seg % 3600;
    min = resto / 60;
    s = resto % 60;
} 
int main(int argc, char const *argv[]){
    //comando para importar caracteres do português, como os acentos.
    setlocale(LC_ALL, "portuguese");

    //entrada do usuário
    printf("Digite o valor da massa inicial do material:    ");
    scanf("%lf", &massa);

    //guardando o valor da massa inicial
    massaInicial += massa;

    //contador para diminuir a massa do material e obter o tempo (em s) levado
    while(massa >= 0.5){
        massa -= massa/2;
        count += 50;
    }

    //chamar a função para calcular a hora
    calcularHora(count);

    //Saída
    printf("A massa inicial do material era de: %.2lfg\nO tempo levado para a massa se tornar menor que 0.5g é de %dh : %dmin : %ds\n", massaInicial, h, min, s);
    
    return 0;
}
