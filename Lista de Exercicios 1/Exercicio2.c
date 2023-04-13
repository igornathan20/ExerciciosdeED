/*2) Escreva um programa que declare um inteiro, um real e um char, e ponteiros para estas variáveis. 
Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. 
Imprima os valores das variáveis antes e após a. modificação.*/



#include <stdio.h>

int main()
{
    printf("\t\t\tUniversidade Federal do Paraná\n");
    printf("\t\tTecnologia em Análise e Desenvolvimento de Sistemas\n");
    printf("\t\t\t DS130 - Estrutura de Dados I\n");
    printf("\t\t\tIgor Nathan Lobato GRR20210549\n\n");
    printf("\t\t\t    Lista de Exercícios 01\n");
    printf("\t\tObjetivo: Exercícios para a fixação do conteúdo\n\n\n");


    int a = 10;
    float b = 5.5;
    char c;
    
    int *pa = &a;
    float *pb = &b;
    char  *pc = &c;
    
  
   
   
    
    printf("a = %d b = %f c = %s\n", a , b , c);
    printf("*pa = %d *pb = %f *pc = %s", *pa , *pb , *pc);

    return 0;
}