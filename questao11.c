/*11. Faça um programa que receba três números e imprima-os em ordem crescente.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    int n1, n2, n3 ;
    
    printf("Digite tres numeros:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
     
    if (n1 > n2 && n1 > n3 ){
        if(n2 > n3){
            printf("%d %d %d", n3, n2, n1);
        }
        else
            if(n3 > n2){
                printf("%d %d %d",  n2, n3, n1);
            }    
    }        
    if (n2 > n1 && n2 >n3 ){
        if(n3 > n1){
            printf("%d %d %d", n1, n3, n2);
        }
        else
            if(n1> n3){
                printf("%d %d %d", n3, n1, n2);
            }
    }
    if (n3 > n1 && n3 >n2 ){
        if(n2 > n1){
            printf("%d %d %d", n1, n2, n3);
        }
        else
            if(n1 > n2){
                printf("%d %d %d", n2, n1, n3);
            }
    }   
    
    return 0;
}