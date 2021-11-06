#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


int main(){
    //comando para importar caracteres do português, como os acentos.
    setlocale(LC_ALL, "portuguese");

    int opcao;

    do{
        printf("\n-----------------------------------\n");
        printf("Selecione uma opção:\n1 - Exercício 1\n2 - Exercício 2\n3 - Exercício 3\n4 - Exercício 4\n5 - Exercício 5\n6 - Exercício 6\n7 - Exercício 7\n");
        scanf("%d", &opcao);
        printf("\n-----------------------------------\n");

        menu(opcao);
    }while(opcao != 0);
}

void menu(int valorOpcao){    
    /*
    Descrição:procedimento que recebe um número e executa os exercicios
    Entradas:um valor inteiro a ser verificado
    Saída:
    */
    switch(valorOpcao){
            case 1:
                exercicio1();
                break;
            case 2:
                exercicio2();
                break;
            case 3:
                exercicio3();
                break;
            case 4:
                exercicio4();
                break;
            case 5:
                exercicio5();
                break;
            case 6:
                exercicio6();
                break;
            case 7:
                exercicio7();
                break;
            case 8:
                exercicio8();
                break;
            case 9:
                exercicio9();
                break;
            default:

                break;
        }
}

int exercicio1F(int n1, int n2, int n3){
    /*
    Descrição:função que recebe três números e verifica qual o valor do meio
    Entradas:três inteiros (n1,n2,n3) a serem verificados
    Saída: retorna um inteiro que é o valor do meio
    */
    if((n1 >= n2 && n1 <= n3) || (n1 <= n2 && n1 >= n3)){
        return n1;
    }else if(n2 >= n1 && n2 <= n3 || n2 <= n1 && n2 >= n3){
        return n2;
    }else{
        return n3;
    }
}

void exercicio1(){
    int num1, num2, num3;

    printf("Digite 3 números:   ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("A mediana é %d!", exercicio1F(num1, num2, num3));
}

float exercicio2F(float n1, float n2, float n3, float n4, float n5){
    /*
    Descrição:função que recebe cinco numeros e retorna a média entre eles
    Entradas:cinco números float (n1,n2,n3,n4,n5) a serem calculados
    Saída: retorna um float com a média das entradas
    */
    return ((n1 + n2 + n3 + n4 + n5)/5);
}

void exercicio2(){
    float num1, num2, num3, num4, num5, media;

    printf("Digite 5 números:   ");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
    
    printf("A média dos números é %.2f\n", exercicio2F(num1, num2, num3, num4, num5));
}

bool exercicio3F(bool A, bool B){
    /*
    Descrição:função que recebe dois valores e retorna se a equação é true ou false
    Entradas:dois valores booleanos a serem verificados na equação lógica
    Saída: retorna um valor booleano
    */
    return !A||B;
}

void exercicio3(){
    int a, b, aux = 0;
    bool ab, bb;


    do{
        printf("'A' será: False (0) ou True (1)?    ");
        scanf("%d", &a);
        switch (a){
            case 0:
                ab = false;
                aux++;
                break;
            case 1:
                ab = true;
                aux++;
                break;
        }
    }while(aux == 0);

    do{
        printf("'B' será: False (0) ou True (1)?    ");
        scanf("%d", &b);
        switch (b){
            case 0:
                bb = false;
                aux++;
                break;
            case 1:
                bb = true;
                aux++;
                break;
        }
    }while(aux == 1);

    printf("A verdade da expressão é %s", exercicio3F(ab, bb)? "True" : "False");
}

void exercicio4(){
    /*
    Descrição:procedimento que lê um número e retorna o reverso dele
    Entradas:
    Saída:
    */
    int num, aux;

    printf("Digite um número:   ");
    scanf("%d", &num);
    
    for(int i = 0; i < (floor(log10(abs(num))) + 1); i++){
        aux = (num/(pow(10, i)));
        printf("O reverso é %d", aux%10);
    }
    
    /*
    for(int i = 0; i < (floor(log10(abs(num))) + 1); i++){
        printf("O reverso é %d", (num/(pow(10, i)))%10);
    }
    */
    
}

int exercicio5F(int num, int alg){
    /*
    Descrição:função que recebe um número e um algarismo, e retorna o algarismo desejado dentro do número
    Entradas:dois inteiros, um sendo um número e o outro um algarismo
    Saída: retorna um inteiro que é o algarismo dentro do número
    */
    int aux = num/pow(10, alg - 1);
    return aux%10;
}

void exercicio5(){
    int numero, algarismo, digito;

    printf("Digite um número:   ");
    scanf("%d", &numero);
    printf("Digite a casa do algarismo desejado:   ");
    scanf("%d", &algarismo);

    digito = exercicio5F(numero, algarismo);

    printf("O %d°dígito é %d", algarismo, digito);
}

void exercicio6(){
    /*
    Descrição:procedimento que faz a soma desejada dentro do exercício 6
    Entradas:
    Saída: 
    */
    int div = 0, fatorial = 1, aux = 1;
    float soma = 0;

    printf("S = ");

    for(int i = 100; i > 90 ; i--){    
        if(i > 90){
            printf("%d/%d! + ", i, div);
        }

        fatorial *= aux;

        if(div == 0){
            soma += (float)i/1;
        }else{
            soma += (float)i/fatorial;
        }

        div++;
        aux = div;
    }
    printf("= %.2f", soma);
}

float exercicio7F(float soma, int div){
    /*
    Descrição:função que recebe recebe o valor de soma e o de divisão da soma pedida no exercicio 7
    Entradas:um float que será o numerador e um inteiro que será o numerador
    Saída: retorna um float com o resultado da soma
    */
    for(int i = 0; i <= 14; i++){
        soma += (pow(2,i)/pow(div, 2));
        div--;
    }
    return soma;
}

int exercicio7(){
    int div = 15;
    float soma = 0;

    soma = exercicio7F(0, div);

    printf("A Soma é %f", soma);
}

int exercicio8F(int min, int max){
    /*
    Descrição:função que recebe um valor mínimo e um máximo e gera um número aleatório entre eles
    Entradas:dois valores inteiros (min,max)
    Saída: retorna um valor aleatório inteiro
    */
    srand(time(0));

    if(min < max){
        return (rand()%(max-min)) + min;
    } else {
        return -1;
    }
}

int exercicio8(){
    int min, max, random;

    printf("Digite um valor mínimo: ");
    scanf("%d", &min);
    printf("Digite um valor máximo: ");
    scanf("%d", &max);

    random = exercicio8F(min, max);

    printf("O número gerado é %d!\n", random);
}

int exercicio9F(int x, int y, int p){
    /*
    Descrição:função que gera pontos aleatórios e calcula a soma das distancia de cada um para o ponto inicial
    Entradas:três valores inteiros (x,y coordenadas do ponto inicial e p quantidade de pontos a serem gerados)
    Saída: retorna um inteiro que é a soma das distâncias
    */
    srand(time(0));

    int xr, yr, dist, soma = 0;
    
    for(int i = 0; i <= p; i++){
        xr = rand() % 10;
        yr = rand() % 10;

        dist = abs(x - xr) + abs(y - yr);

        soma += dist;

        printf("A distancia do ponto (%d,%d) para o ponto (%d,%d) é de %d\n", x, y, xr, yr, dist);

    }

    return soma;
}

int exercicio9(){
    int x, y, p, soma;

    printf("Digite os valores da coordanada (x,y)\n");
    printf("Ponto X:    ");
    scanf("%d", &x);
    printf("Ponto Y:    ");
    scanf("%d", &y);
    printf("Quantos pontos deseja analisar? ");
    scanf("%d", &p);

    soma = exercicio9F(x, y, p);

    printf("A soma das distâncias entre os ponto é %d!\n", soma);
}