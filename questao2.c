/*Faça um programa que receba dois números. Calcule a soma dos dois números. 
Caso a soma seja maior que 10, imprima o resultado da soma.*/

#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    
    int soma = num1 + num2;
    if (soma > 10) {
        printf("%d", soma);
    }

    return 0;
}
