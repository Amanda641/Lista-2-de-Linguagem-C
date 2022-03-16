/*15. Faça um programa que receba a altura e o peso de um indivíduo. 
Calcule seu IMC = peso / altura² e determine sua situação baseado no seu IMC:
abaixo do peso (IMC < 20),peso normal (20 ≤ IMC ≤ 25), sobrepeso (25 < IMC ≤ 30),
obesidade (30 < IMC ≤ 40) ou obesidade mórbida (IMC > 40).*/
#include <stdio.h>
#include <math.h>

int main()
{
    
    float peso, altura;
    
    printf("Digite sua altura e peso:\n");
    scanf("%f%f", &altura, &peso);
    
    float IMC = peso / pow(altura, 2);
    
    if (IMC < 20){
        printf("abaixo do peso");
    }
    if (20 <= IMC && IMC <= 25){
        printf("peso normal");
    }
    if (25 < IMC && IMC <= 30){
        printf("sobrepeso");
    }
    if (30 < IMC && IMC <= 40){
        printf("obesidade");
    } 
    if (IMC > 40){
        printf("obesidade morbida");
    }

    return 0;
}
