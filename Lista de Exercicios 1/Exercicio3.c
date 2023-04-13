/*3) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. 
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/



#include <stdio.h>

int main()
{
    printf("\t\t\tUniversidade Federal do Paraná\n");
    printf("\t\tTecnologia em Análise e Desenvolvimento de Sistemas\n");
    printf("\t\t\t DS130 - Estrutura de Dados I\n");
    printf("\t\t\tIgor Nathan Lobato GRR20210549\n\n");
    printf("\t\t\t    Lista de Exercícios 01\n");
    printf("\t\tObjetivo: Exercícios para a fixação do conteúdo\n\n\n");


    int a = 5;
    int b = 10;
    
    int *pa = &a;
    int *pb = &b;
   
   printf("\n\n a = %d b = %d *pa = %d *pb=%d\n\n",a,b, *pa, *pb);
    
    printf("Digite um numero:  ");
    scanf("%d", &a);
    
    printf("\n\nDigite outro numero:  ");
    scanf("%d", &b);
    
    if (pa > pb){
        printf("\n\n*pa = %d *pb=%d", *pa, *pb);
        printf("\no endereço de memoria de pa é maior = %d", pa);
    }
    
    else 
        printf("\n\n*pa = %d *pb=%d", *pa, *pb);
        printf("\no endereço de memoria de pb é maior = %d", pb);
   
    return 0;
}