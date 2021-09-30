#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int soma = 0, i = 70;

    while(i>=40){
        printf("%d ", i);

        soma += i;
        i--;
    }

    printf("\nA soma dos números é %d", soma);
    return 0;
}
