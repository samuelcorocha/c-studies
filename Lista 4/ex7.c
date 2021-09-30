#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
 
int main() {
    setlocale(LC_ALL, "portuguese");
    double result; 
    int linhas, colunas, cabecalho = 0;

    printf("Quantidade de Linhas:   ");
    scanf("%d", &linhas);
    printf("Quantidade de Colunas:  ");
    scanf("%d", &colunas);

    for(int x = 1; x <= linhas; x++){
        for(int i = 1; i <= colunas; i++){
            if (cabecalho < colunas){
                printf("x^%d  |  ", i);
                cabecalho++;
                x=0;
            }else {
                result = pow(x,i);

                printf("%.0f  |  ", result);
            }
        }
        printf("\n");
    }

    return 0;
}