/*03. Faça um programa que receba um número e imprima se ele é par ou ímpar.*/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    
    if (num % 2 == 0) {
        printf("par");
    }else{
        printf("impar");
    }

    return 0;
}
