/*08. Faça um programa que receba um número a e um número b.
Verifique se a é divisível por b ou não e imprima na tela essa informação.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    
    printf("Digite um valor para a: ");
    scanf("%d", &a);
    printf("Digite um valor para b: ");
    scanf("%d", &b);
    
    if (a % b == 0) {
        printf("a  eh divisivel por b");
    }else{
        printf("a n eh divisivel b");
    }

    return 0;
}