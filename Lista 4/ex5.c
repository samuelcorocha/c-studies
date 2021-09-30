#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
 
int main() {
    setlocale(LC_ALL, "portuguese");
    srand(time(0));

    int x, y, p, xp, yp, distancia,soma = 0;

    printf("Digite os valores da coordanada (x,y)\n");
    printf("Ponto X:    ");
    scanf("%d", &x);
    printf("Ponto Y:    ");
    scanf("%d", &y);
    printf("Quantos pontos deseja analisar? ");
    scanf("%d", &p);
    
    for(int i = 0; i <= p; i++){
        xp = rand() % 10;
        yp = rand() % 10;

        distancia = (x - xp) + (y - yp);

        if(distancia < 0)
            distancia = distancia*(-1);
            soma += distancia;
            
            printf("A distancia do ponto (%d,%d) para o ponto (%d,%d) é de %d\n", x, y, xp, yp, distancia);
    }
    
    printf("A soma das distancias é %d", soma);

    return 0;
}