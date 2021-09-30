#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i = 70;

    do{
        printf("%d ", i);

        i--;
    }while(i>=40);

    return 0;
}
