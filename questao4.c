/*4. Faça um programa que receba um número e imprima se ele é positivo, negativo ou nulo (zero).*/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("positivo");
    }
    if (num < 0)
    {
        printf("negativo");
    }
    if(num == 0){
        printf("nulo");
    }

    return 0;
}
