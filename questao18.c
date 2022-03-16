/*18. Faça um programa que receba um inteiro entre 1 e 7.
Imprima o dia da semana correspondente (1 sendo Domingo e 7 sendo Sábado).
Caso o número recebido não seja dentro do intervalo, imprima que o dia da semana não existe.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int dia;
    
    printf("Digite um inteiro entre 1 e 7: ");
    scanf("%d", &dia);
    
    switch (dia){
    case 1:
    printf("Domingo");
    break;
    
    case 2:
    printf("Segunda");
    break;
    
    case 3 :
    printf ("Terça");
    break;
    
    case 4 :
    printf ("Quarta");
    break;
    
    case 5 :
    printf ("Quinta");
    break;
    
    case 6 :
    printf ("Sexta");
    break;
    
    case 7 :
    printf ("Sabado");
    break;
    
    default :
    printf ("o dia da semana não existe.");
  }
    return 0;
}
