/*Faça um programa que receba dois inteiros diferentes. 
Imprima na tela o maior e o menor número.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    
    
    if(a > b) {
        printf("maior numero eh %d", a);
        printf("\nmenor numero eh %d", b);
    }
     if(b > a) {
        printf("maior numero eh %d", b);
        printf("\nmenor numero eh %d", a);
    }
    if(b == a) {
        printf("Esses numeros sao iguais, digite outro numeros!");
    } 
    return 0;
}