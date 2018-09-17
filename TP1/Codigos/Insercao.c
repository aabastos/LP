#include <stdio.h>
#include <stdlib.h>

// Função que realiza a ordenação do vetor utilizando o método
// de inserção.
void insertionSort(int array[], int tamanho) {
      int i, j, tmp;
      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && array[j - 1] > array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
      }
}

int main(){
   int tamanho;

   // Leitura do tamanho do vetor.
   printf("Digite o numero de elementos: ");
   scanf("%d", &tamanho);

   int array[tamanho];

   // Leitura dos elementos do vetor.
   for(int i = 0; i < tamanho;i++){
      printf("Digite o %dº número: ",i+1);
      scanf("%d",&array[i]);
   }

   // Impressão do vetor desordenado.
   printf("Vetor desordenado: ");
   for(int i = 0; i < tamanho;i++){
      printf("%d ",array[i]);
   }
   printf("\n");

   // Chamada da função para ordenação do vetor.
   insertionSort(array, tamanho);

   // Impressão do vetor ordenado.
   printf("Vetor ordenado: ");
   for(int i = 0; i < tamanho;i++){
      printf("%d ",array[i]);
   }
   printf("\n");
}
