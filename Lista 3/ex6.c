#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i = 0, par = 0, impar = 0;

    do{
        scanf("%d", &i);

        if(i != 0){
            if(i%2==0){
                par++;
            }else{
                impar++;
            }
        }

    }while(i != 0);

    printf("Pares = %d || Impares = %d", par, impar);
    return 0;
}