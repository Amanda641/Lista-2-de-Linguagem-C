/*Faça um programa que receba um número. 
Caso o número seja positivo, imprima sua raiz; 
caso contrário, imprima seu quadrado*/

#include <stdio.h>
#include <math.h>

int main()
{
    float num, raiz;
    
    printf("Digite um numero: ");
    scanf("%f", &num);
    
    if (num > 0) {
        raiz = sqrt(num);
        printf("%f", raiz);
    }
    if (num < 0){
        num = pow(num,2);
        printf("%f", num);
    }
    return 0;
}
