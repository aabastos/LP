#include <stdlib.h>
#include <stdio.h>

// Estrutura da celula da fila.
struct celula{
  int elemento;
  struct celula *prox;
};

typedef struct celula Celula;

// Função para inserçaõ de elementos na fila.
void inserirElemento(Celula *head, int x){
  Celula *celula;
  // Caminhamento para a ultima posição da fila.
  for(celula = head; celula -> prox != NULL; celula = celula -> prox);

  celula -> prox = malloc(sizeof *celula -> prox);  // Alocando memória para o novo elemento.
  celula -> prox -> elemento = x;                   // Setando novo elemento
  celula -> prox -> prox = NULL;                    // Aterrando apontador prox
}

// Função para remoção de elementos da fila.
void removerElemento(Celula *head){
  Celula *celula;
  Celula *tmp;
  // Caminhamento para a ultima posição da fila.
  for(celula = head; celula -> prox != NULL; celula = celula -> prox){
    tmp = celula;                                   // Apontador para penultima posição da fila.
  }

  if(celula == head){                               // Fila vazia.
    printf("\nFila vazia!\n");
  }else{                                            // Fila possui pelo menos um elemento.
    tmp -> prox = NULL;                             // Retira ultimo elemento da fila.
    printf("\nElemento removido: %d\n", celula -> elemento);
    free(celula);                                   // Libera memória.
  }
}

// Função para impressão da fila.
void imprimirFila(Celula *head){
  printf("\tFila: ");
  for(Celula *celula = head -> prox; celula != NULL; celula = celula -> prox){
    printf("%d ", celula -> elemento);
  }
}

int main(){
  Celula *head = malloc(sizeof *head);
  head -> prox = NULL;

  int elemento;
  int opc;

  do{
    printf("\n\nEscolha a ação desejada: \n");
    printf("\t1 - Inserir elemento.\n");
    printf("\t2 - Remover elemento.\n");
    printf("\t3 - Imprimir fila.\n");
    printf("\t0 - Sair.\n");
    printf("\t\tOpção: ");
    scanf("%d", &opc);

    switch (opc) {
      case 1:
        printf("\nDigite o valor do elemento: ");
        scanf("%d", &elemento);
        inserirElemento(head, elemento);
        printf("Elemento inserido.\n");
        break;
      case 2:
        removerElemento(head);
        break;
      case 3:
        imprimirFila(head);
        break;
      case 0:
        return 0;
      default:
        printf("Opção inválida\n");
    }
  }while(opc != 0);
}
