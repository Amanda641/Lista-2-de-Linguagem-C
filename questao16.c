/*16. Faça um programa que receba a idade de uma pessoa e imprima sua classe eleitoral (facultativo, obrigatório ou não-eleitor).*/
#include <stdio.h>
#include <math.h>

int main()
{
    
    int idade;
    
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    
    
    if (idade < 16){
        printf("n-eleitor");
    }
    if (16 <= idade && idade < 18 || idade > 70 ){
        printf("facultativo");
    }
    if (18 <= idade && idade <= 70){
        printf("obrigatório");
    }
    
    
    return 0;
}
