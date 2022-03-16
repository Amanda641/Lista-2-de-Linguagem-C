/*12. Faça um programa que receba um números inteiro e imprima se ele se encontra entre 20 e 90 ou não.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
     
    if (20 < n  && n < 90 ){
        printf("%d se encontra entre 20 e 90", n);
    }
        
    else{
        printf("%d não se encontra entre 20 e 90", n);
    
    }   
    
    return 0;
}