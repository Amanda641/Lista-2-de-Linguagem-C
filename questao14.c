/*14. Faça um programa que receba um número e imprima sua raiz quadrada, se possível.
Caso não seja possível, apresente a mensagem “não é possível“.*/
#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    
    printf("Digite um numero: ");
    scanf("%lf", &num);
    
    double raiz = sqrt(num);
    
    if (raiz >= 0){
        printf("%lf", raiz);
    }
    else {
        printf("n eh possivel");
    }

    return 0;
}
