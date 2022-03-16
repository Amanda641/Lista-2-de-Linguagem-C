/*17. Faça um programa que receba o valor de x e imprima o valor de f(x)*/
#include <stdio.h>
#include <math.h>

int main()
{
    int x, func;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    if (x <= 1){
        printf("1");
    }
    if (1 < x && x <= 2){
        printf("2");
    }
    if (2 < x && x <= 3){
        func = pow(x,2);
        printf("%d", func);
    }
    if (x > 3){
        func = pow(x,3);
        printf("%d", func);
    }
    return 0;
}
