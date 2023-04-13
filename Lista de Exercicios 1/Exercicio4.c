/*4- Crie um programa que contenha um array de inteiros com 5 elementos. Utilize ponteiros
pare realizar a leitura do array via teclado. Após isto, percorra novamente este primeiro
array com o ponteiro e faça com que um segundo array receba cada elemento do
primeiro.*/



#include <stdio.h>

int main()
{
    int array1 [5];
    int array2 [5];
    int *ptarray = array1;
    int a;
   
//preenche o primeiro array

    for (int i = 0; i<6;i++ ){
        
        array1[i] = i + 2;
    } 
   
//exibe via teclado as posicoes do array 1    

    printf("Digite a posição do array1 que será exibida: ");
    scanf("%d", &a);


    printf("\n\n%s%d%s%d\n\n","A posição ", a , " do array1 contem:  ", ptarray[a]);


//com ponteiro o array2 recebe os valores do array1

    for (int i = 0; i<6;i++ ){
        
        array2[i] = ptarray[i];
    } 

//exibe na tela
    printf("o segundo array contem: \n");
     for (int i = 0; i<6;i++ ){
        
        printf("posição %d contem %d \n", i, array2[i]);
    } 

    return 0;