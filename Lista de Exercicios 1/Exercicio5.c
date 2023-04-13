/*5- Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse
array do teclado e imprima o endereço das posições contendo valores pares.*/



#include <stdio.h>

int main()
{
    int array1[5];
    int *ptrarray[5];
    
    for (int i = 0; i<5;i++ ){
        ptrarray[i] = &array1[i];
        
    }
    
    printf("preencha os valores do array: \n\n");
    
    for (int i = 0; i<5;i++ ){
       
       scanf("%d", &array1[i] );
    } 
   
   
   for (int i = 0; i<5;i++ ){
       
       if ((array1[i] % 2) == 0 ){
          
          printf("%s%d%s%p\n","o endereço de memoria que tem o valor par:  ",array1[i]," é ",ptrarray[i]); 
       }
    } 

    return 0;
}