/*13. Faça um programa que receba um número e imprima apenas “é válido” ou “não é válido” 
caos ele satisfaça pelo menos uma das condições:
ser igual a 5, ser igual a 200, estar entre 10 e 100, estar entre 250 e 500.*/
#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num == 5 || num == 200 || num > 10 && num < 100 || num > 250 && num < 500){
        printf("eh valido");
    }
    else {
        printf("n eh valido");
    }

    return 0;
}
