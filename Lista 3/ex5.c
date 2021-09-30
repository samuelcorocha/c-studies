#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, num2, total = 0;

    printf("Digite o valor os mumeros que deseja multiplicar: ");
    scanf("%d %d", &num1, &num2);
    
    if(num2 >= 0 ){
        for(int i = 0; i < num2; i++){
            total += num1;
        }
    }else{
        for(int i = 0; i > num2; i--){
            total -= num1;
        }
    }

    printf("%d x %d = %d", num1, num2, total);
    return 0;
}