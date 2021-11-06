#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

#define tam20 20

int main()
{
    //Localiza o código para o português
    setlocale(LC_ALL, "portuguese");

    //Menu principal
    int opcao;

    do
    {
        printf("---> Selecione uma questão (1-7) ou digite 0 para sair:  ");
        scanf("%d", &opcao);
        printf("\n\n");

        menu(opcao);
    } while (opcao != 0);
    return 0;
}

int menu(int opcao)
{
    switch (opcao)
    {
    case 0:
        printf("Até a próxima... :(");
        break;
    case 1:
        printf("Iniciando exercício 1!\n\n");
        Q1();
        printf("\n\nEncerrando...\n\n");
        break;
    case 3:
        printf("Iniciando exercício 3!\n\n");
        Q3();
        printf("\n\nEncerrando...\n\n");
        break;
    case 4:
        printf("Iniciando exercício 4!\n\n");
        Q4();
        printf("\n\nEncerrando...\n\n");
        break;
    case 6:
        printf("Iniciando exercício 6!\n\n");
        Q6();
        printf("\n\nEncerrando...\n\n");
        break;
    default:
        printf("Valor inválido! Tente novamente...\n");
        break;
    }
}

bool funcaoQ1(char txt1[], char txt2[])
{
    if (strcmp(txt1, txt2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Q1()
{
    char texto1[tam20], texto2[tam20];
    bool iguais;

    printf("Digite uma String:  ");
    fflush(stdin);
    fgets(texto1, tam20, stdin);

    printf("Digite outra String:  ");
    fflush(stdin);
    fgets(texto2, tam20, stdin);

    iguais = funcaoQ1(texto1, texto2);

    printf("As frases são iguais? %s", iguais ? "Verdadeiro" : "Falso");
}

void procedimentoQ3(char txt1[], char txt2[], char txt3[])
{
    if (strcmp(txt1, txt2) < 0)
    {
        if (strcmp(txt2, txt3) < 0)
        {
            if (strcmp(txt1, txt3) < 0)
            {
                printf("%s%s%s", txt1, txt2, txt3); //1, 2, 3
            }
            else
            {
                printf("%s%s%s", txt3, txt1, txt2); //3, 1, 2
            }
        }
        else
        {
            printf("%s%s%s", txt1, txt3, txt2); //1, 3, 2
        }
    }
    else if (strcmp(txt1, txt2) > 0)
    {
        if (strcmp(txt1, txt3) < 0)
        {
            if (strcmp(txt1, txt3) < 0)
            {
                printf("%s%s%s", txt2, txt1, txt3); //2, 1, 3
            }
            else
            {
                printf("%s%s%s", txt3, txt2, txt1); //3, 2, 1
            }
        }
        else
        {
            printf("%s%s%s", txt2, txt3, txt1); //2, 3 , 1
        }
    }
}

void Q3()
{
    char texto1[tam20], texto2[tam20], texto3[tam20];

    printf("Digite uma String:  ");
    fflush(stdin);
    fgets(texto1, tam20, stdin);

    printf("Digite outra String:  ");
    fflush(stdin);
    fgets(texto2, tam20, stdin);

    printf("Digite outra String:  ");
    fflush(stdin);
    fgets(texto3, tam20, stdin);

    procedimentoQ3(texto1, texto2, texto3);
}

int numMax(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}

int funcaoQ4(char txt1[], char txt2[])
{
    int soma = 0;
    bool igualAnterior;
    int length1 = strlen(txt1), length2 = strlen(txt2), length3 = numMax(length1, length2);
    char txt3[length3];
    int last = 0;

    for (int i = 0; i < length3; i++)
    {
        txt3[i] = NULL;
    }

    for (int i = 0; i < length1; i++)
    {
        for (int j = 0; j < length2; j++)
        {
            if (txt1[i] == txt2[j])
            {
                char letra = txt1[i];
                bool control = true;

                for (int k = 0; k < last; k++)
                {
                    if (letra == txt3[k])
                    {
                        control = false;
                        break;
                    }
                }

                if (control)
                {
                    txt3[last] = letra;
                    last++;
                    break;
                }
            }
        }
    }

    return last;
}

void Q4()
{
    char texto1[tam20], texto2[tam20], texto3[tam20];

    printf("Digite uma String:  ");
    fflush(stdin);
    fgets(texto1, tam20, stdin);

    printf("Digite outra String:  ");
    fflush(stdin);
    fgets(texto2, tam20, stdin);

    int caractIguais = funcaoQ4(texto1, texto2);

    printf("%d caractere(s) é(são) igual(is) em ambas as Strings!", caractIguais);
}

int funcaoQ6(char txt1[], char txt2[])
{
    bool subStr;
    for (int i = 0; i < strlen(txt1); i++)
    {
        for (int j = 0; j < strlen(txt2); j++)
        {
            if (txt1[i] == txt2[j])
            {
                for (int x = i; x < strlen(txt1); x++)
                {
                    for (int y = j; y < strlen(txt2); y++)
                    {
                        if (txt1[x] != txt2[y])
                        {
                            subStr = false;
                        }
                    }
                }
                if (!subStr)
                {
                    return i;
                }
            }
        }
    }
    return -1;
}

void Q6()
{
    char texto1[tam20], texto2[tam20], texto3[tam20];

    printf("Digite uma String:  ");
    fflush(stdin);
    fgets(texto1, tam20, stdin);

    printf("Digite outra String:  ");
    fflush(stdin);
    fgets(texto2, tam20, stdin);

    int subString = funcaoQ4(texto1, texto2);

    subString >= 0 ? printf("\nA subString inicia na %dº posição!", subString) : printf("\nNão existe subString nessa opção!");
}