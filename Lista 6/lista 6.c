#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

int main()
{
	//comando para importar caracteres do português, como os acentos.
	setlocale(LC_ALL, "portuguese");

	int opcao;

	do
	{
		printf("\n-----------------------------------\n");
		printf("Selecione uma opção 2, 3, 5, 6, 8, 10, 12, 13, 14, 15 e 17.\n");
		scanf("%d", &opcao);
		printf("\n-----------------------------------\n");

		menu(opcao);
	} while (opcao != 0);
}

void menu(int valorOpcao)
{
	/*
    Descrição:procedimento que recebe um número e executa os exercicios
    Entradas:um valor inteiro a ser verificado
    Saída:
    */
	switch (valorOpcao)
	{
	// case 1:
	// 	//exercicio1();
	// 	break;
	case 2:
		exercicio2();
		break;
	case 3:
		exercicio3();
		break;
	// case 4:
	// 	//exercicio4();
	// 	break;
	case 5:
		exercicio5();
		break;
	case 6:
		exercicio6();
		break;
	// case 7:
	// 	//exercicio7();
	// 	break;
	case 8:
		exercicio8();
		break;
	// case 9:
	// 	//exercicio9();
	// 	break;
	case 10:
		exercicio10();
		break;
	// case 11:
	// 	//exercicio11();
	// 	break;
	case 12:
		exercicio12();
		break;
	case 13:
		exercicio13();
		break;
	case 14:
		exercicio14();
		break;
	case 15:
		exercicio15();
		break;
	// case 16:
	// 	//exercicio16();
	// 	break;
	case 17:
		exercicio17();
		break;
	// case 18:
	// 	//exercicio18();
	// 	break;
	default:
		printf("Valor inválido, tente novamente.");
		break;
	}
}

void exercicio2P(int A, int B, int C, int *verdade)
{
	/*
    Descrição:procedimento que recebe dois valores e retorna por referência o valor verdade.
    Entradas: Váriavel A e B, sendo 0 ou 1, e *verdade por referência
    Saída: *verdade por referência
    */
	*verdade = !(A || !B && C);
}

void exercicio2()
{
	int A, B, C, verdade;

	printf("Digite os os valores de A, B e C sendo 0 para False e 1 para True (A B C): ");
	scanf("%d %d %d", &A, &B, &C);

	exercicio2P(A, B, C, &verdade);

	printf("!(A || !B && C) = %d", verdade);
}

float exercicio3F(int num1, int num2, int num3, int *maior)
{
	/*
    Descrição: uma função que recebe 3 números como parâmetro de entrada, calcule e retorne e a média dos números (retorno de função usando return) e o maior valor (usando parâmetro por referência). 
    Entradas: Inteiros num1, num2, num3 e *maior por referencia.
    Saída: retorna a média e por referência o maior.
    */
	if (num1 > num2 > num3)
	{
		*maior = num1;
	}
	else if (num2 > num1 > num3)
	{
		*maior = num2;
	}
	else
	{
		*maior = num3;
	}

	return (num1 + num2 + num3) / 3;
}

void exercicio3()
{
	int num1, num2, num3, maior;
	float media;

	scanf("%d %d %d", &num1, &num2, &num3);
	media = exercicio3F(num1, num2, num3, &maior);

	printf("O maior número é %d e a média dos números é %.2f", maior, media);
}

void exercicio5()
{
	/*
    Descrição:um procedimento que armazene em um vetor 3 valores inteiros digitados por um usuário. Para cada valor lido, mostre a posição no vetor, o endereço e o seu valor
    Entradas: 
    Saída:
    */
	int tam = 3, valores[tam], *ptr = valores;

	for (int i = 0; i < tam; i++)
	{
		printf("Digite o %dº valor: ", i + 1);
		scanf("%d", &valores[i]);
	}
	printf("POSICAO_VETOR  |  ENDERECO  |  VALOR");

	for (int i = 0; i < tam; i++)
	{
		printf("%d  %p  %d\n", i, &ptr[i], valores[i]);
	}
}

void exercicio6()
{
	/*
    Descrição: um algoritmo que declare uma variável e mostre o valor endereço e tamanho na memória para cada um dos seguintes tipos: char, int, float e double.
    Entradas: 
    Saída:
    */
	char caractere[] = "1";
	int inteiro = 1;
	float flutuante = 1;
	double dobro = 1;

	printf("O Endereço do char    %s é 0x%p. Essa variável ocupa %d bytes.\n", caractere, &caractere, sizeof(char));
	printf("O Endereço do int     %d é 0x%p. Essa variável ocupa %d bytes.\n", inteiro, &inteiro, sizeof(int));
	printf("O Endereço do float   %f é 0x%p. Essa variável ocupa %d bytes.\n", flutuante, &flutuante, sizeof(float));
	printf("O Endereço do double  %lf é 0x%p. Essa variável ocupa %d bytes.\n", dobro, &dobro, sizeof(double));
}

void exercicio8()
{
	/*
    Descrição:um procedimento que lê 10 números informados pelo usuário  e  armazena  em um vetor. Imprime os elementos do vetor cujo valor seja igual ao índice da posição.
    Entradas: 
    Saída:
    */
	int tam = 10, vet[tam];

	printf("Digite 10 números:\n");
	for (int i = 0; i < tam; i++)
	{
		printf("Digite o %dº valor: ", i + 1);
		scanf("%d", &vet[i]);
	}

	for (int i = 0; i < tam; i++)
	{
		if (vet[i] == i)
		{
			printf("Posição: %d | Valor: %d\n", i, vet[i]);
		}
	}
}

void exercicio10()
{
	/*
    Descrição:um  procedimento  que  gera  10  temperaturas  aleatórias  entre  18  e  40  C  e  armazena em  um  vetor.  Imprime  a  maior,  a  menor  e  a  temperatura  média.  Mostra  também  o  número  de vezes que a temperatura foi abaixo da média.  
    Entradas: 
    Saída:
    */
	int tam = 10, temp[tam], maior = 17, menor = 41, soma = 0, cont = 0;
	float media;
	srand(time(0));

	printf("Temperaturas geradas:\n");

	for (int i = 0; i < tam; i++)
	{
		temp[i] = (rand() % 23) + 18;
		soma += temp[i];
		printf("%d° ", temp[i]);
	}

	media = soma / tam;

	for (int i = 0; i < tam; i++)
	{
		if (temp[i] > maior)
		{
			maior = temp[i];
		}
		if (temp[i] < menor)
		{
			menor = temp[i];
		}
		if (temp[i] < media)
		{
			cont++;
		}
	}
	printf("\nMaior: %d | Menor: %d | Media: %.2f | Vezes abaixo da média: %d", maior, menor, media, cont);
}

void exercicio12()
{
	/*
    Descrição:um procedimento que lê N números entre 0 e 9 informados pelo usuário e depois armazena  em  cada  posição  i  de  um  vetor  de  10  posições  o  número  de  vez  que  o  número  i apareceu.   
    Entradas: 
    Saída:
    */
	int tam = 10, vet[tam], temp;
	printf("Digite valores entre 0 e 9, para sair digite um valor < 0 ou >= 10:\n");

	for (int i = 0; i < tam; i++)
	{
		vet[i] = 0;
	}

	do
	{
		printf("Digite algum valor: ");
		scanf("%d", &temp);
		vet[temp]++;
	} while (temp >= 0 && temp <= 9);

	for (int i = 0; i < tam; i++)
	{
		printf("Posição: %d | Quantidade: %d\n", i, vet[i]);
	}
}

int exercicio13F(int vetor[], int tam)
{
	/*
    Descrição:uma função que retorne a soma  dos  elementos  ímpares  distintos  (sem  repetição).  Por  exemplo,  seja  o  vetor  com  os seguintes elementos: 
    Entradas: vetor de inteiros e inteiro com o tamanho do vetor
    Saída: a soma do inteiros impares do vetor
    */
	int anterior = 0, atual = 0, soma = 0;

	for (int i = 0; i < tam; i++)
	{
		atual = vetor[i];

		if (atual > anterior && atual % 2 != 0)
		{
			soma += atual;
		}

		anterior = atual;
	}

	return soma;
}

void exercicio13()
{
	int tam, anterior = 0, soma = 0;

	printf("Quantos números deseja ler neste exercício?	");
	scanf("%d", &tam);

	int vet[tam];

	printf("Digite %d números inteiros ordenados de forma crescente, caso digite um valor menor que o anterior, esse número não será lido:\n", tam);

	for (int i = 0; i < tam; i++)
	{
		printf("Digite o %dº valor: ", i + 1);
		scanf("%d", &vet[i]);

		if (vet[i] < anterior)
		{
			i--;
		}
		else
		{
			anterior = vet[i];
		}
	}

	soma = exercicio13F(vet, tam);

	printf("A soma dos valores ímpares únicos é %d!", soma);
}

void exercicio14P(int vet[], int tam)
{
	/*
    Descrição:um  procedimento  que  recebe  um  vetor  e  imprima  os  elementos  cuja  posição  fazem faz parte da série de fibonacci.  
    Entradas: vetor de inteiros e inteiro com o tamanho do vetor
    Saída:
    */
	int a = 0, b = 1, aux;

	while (a <= tam)
	{
		printf("%d ", vet[a]);

		aux = a + b;
		a = b;
		b = aux;
	}
}

void exercicio14()
{
	int tam;

	printf("Quantos números deseja ler neste exercício?	");
	scanf("%d", &tam);

	int vet[tam];

	printf("Digite %d números inteiros :\n", tam);

	for (int i = 0; i < tam; i++)
	{
		printf("Digite o %dº valor: ", i + 1);
		scanf("%d", &vet[i]);
	}

	printf("Os números nas posições de fibonacci são:\n");
	exercicio14P(vet, tam);
}

int exercicio15F(int vet1[], int vet2[], int tam1, int tam2)
{
	/*
    Descrição:uma  função  que  recebe  dois  vetores  e  retorne  a  soma  dos  elementos  distintos  dos dois vetores.  
    Entradas: dois vetores de inteiros e dois inteiros com o tamanho dos vetores
    Saída: a soma dos elementos distintos dos vetores
    */
	int soma = 0, comum;

	for (int i = 0; i < tam1; i++)
	{
		comum = 0;
		for (int j = 0; j < tam2; j++)
		{
			if (vet1[i] == vet2[j])
			{
				comum = 1;
				break;
			}
		}
		if (comum == 0)
		{
			soma += vet1[i];
		}
	}

	for (int i = 0; i < tam2; i++)
	{
		comum = 0;
		for (int j = 0; j < tam1; j++)
		{
			if (vet2[i] == vet1[j])
			{
				comum = 1;
				break;
			}
		}
		if (comum == 0)
		{
			soma += vet2[i];
		}
	}

	return soma;
}
void exercicio15()
{
	int tam1, tam2;

	printf("Quantos números deseja no primeiro vetor?	");
	scanf("%d", &tam1);

	int vet1[tam1];

	for (int i = 0; i < tam1; i++)
	{
		printf("Digite o %dº valor: ", i + 1);
		scanf("%d", &vet1[i]);
	}

	printf("Quantos números deseja no segundo vetor?	");
	scanf("%d", &tam2);

	int vet2[tam2];

	for (int i = 0; i < tam2; i++)
	{
		printf("Digite o %dº valor: ", i + 1);
		scanf("%d", &vet2[i]);
	}

	int soma = exercicio15F(vet1, vet2, tam1, tam2);

	printf("A soma dos termos distintos dos dois vetores é %d", soma);
}
void exercicio17()
{
	/*
    Descrição:um procedimento que preenche um vetor com o resultado da função f(x) = 3x³ + 2x² +1x -5, onde X é o índice da posição do vetor. Após preencher o vetor, imprima seu conteúdo.  
    Entradas: 
    Saída:
    */
	int X;

	printf("O valor inteiro máximo que X deverá assumir:	");
	scanf("%d", &X);

	int result[X];

	printf("X = ? | 3X^3 + 2X^2 + 1X - 5\n");

	for (int i = 0; i <= X; i++)
	{
		result[i] = (3 * (pow(i, 3))) + (2 * (pow(i, 2))) + (1 * i) - 5;
	}

	for (int i = 0; i <= X; i++)
	{
		printf("X = %d | %d\n", i, result[i]);
	}
}