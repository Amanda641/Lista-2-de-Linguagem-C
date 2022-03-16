/*07. Faça um programa que receba um número e imprima a mensagem: 
“é múltiplo de 3” ou “não é múltiplo de 3”.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num % 3 == 0) {
        printf("eh multiplo de 3");
    }else{
        printf("n eh multiplo de 3");
    }

    return 0;
}