/*6- Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Percorra a matriz com um ponteiro imprima o endereço e o valor de cada posição dessa
matriz.*/



#include <stdio.h>


int main() {
    float matriz[3][3] = {{1.1, 2.2, 3.3}, {4.4, 5.5, 6.6}, {7.7, 8.8, 9.9}};
    float *ptr = &matriz[0][0]; 

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Endereco da posicao [%d][%d]: %p", i, j, ptr);
            printf("  Valor da posicao [%d][%d]: %.1f\n", i, j, *ptr);
            ptr++; 
        }
    }

    return 0;
}