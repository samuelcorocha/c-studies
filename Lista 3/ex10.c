#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 1, i;

    while(i != 0){
        if(num%3==2 && num%5==3 && num%9==5){
            i = 0;
        }else{
            num++;
        }
    }

    printf("O número que satisfaz a condição é: %d", num);

    return 0;
}
