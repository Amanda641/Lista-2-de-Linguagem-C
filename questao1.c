/*01. Faça um programa que receba um número e imprima ele caso seja maior que 20.*/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num > 20) {
        printf("%d", num);
    }

    return 0;
}
