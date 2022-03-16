/*5. Faça um programa que receba dois números e efetue a soma deles. 
Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8; 
caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5*/

#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    
    int soma = num1 + num2;
    
    if (soma > 20) {
        soma = soma + 8;
        printf("%d", soma);
    }
    
    if(soma <= 20){
        soma = soma - 5;
        printf("%d", soma);
    }

    return 0;
}
