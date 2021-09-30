#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d = 1;

    a = -2;
    b = a * a;
    c = d++;
    d = ++c + 5;

    printf("%d, %d, %d, %d", a, b, c, d);

    return 0;
}  
