#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int maior, menor;

    printf("Digite o valor inicial (numero maior) e final (numero menor): ");
    scanf("%d %d", &maior, &menor);
    
    
    for(int i = maior; i >= menor; i--){
        printf("%d ", i);
    }
    return 0;
}