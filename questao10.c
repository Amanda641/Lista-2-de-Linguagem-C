/*10. Faça um programa que receba quatro números e imprima o maior e o menor número.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    int i, n, maior, menor ;
    
    printf("Digite o 1° numero: ");
    scanf("%i", &n);
    maior=n;
    menor=n;
    for (i = 1; i< 4; i++ ){
        printf("Digite o %d° numero: ", i + 1);
        scanf("%i", &n);
        
        if (n > maior){
            maior = n;
        }    
        else 
            if (n < menor){
            menor = n;
        }
    }        
    printf("o maior numero eh %d", maior);
    printf("\no menor numero eh %d", menor);     
    
    
    return 0;
}