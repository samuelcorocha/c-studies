#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
 
int main() {
    setlocale(LC_ALL, "portuguese");
    double result;
    int cabecalho = 0;

    for(int x = 1; x <= 100; x++){
        for(int i = 1; i <= 4; i++){
            if (cabecalho < 4){
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