//Inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Função recursiva que calcula a sequência de Fibonacci
int fibonacci(int num){
  if(num == 0 || num == 1){
    return num;
  }else{
    return(fibonacci(num - 1) + fibonacci(num - 2));
  }
}

int main(){
  int numSerie = 0;

  printf("Digite a série que deseja calcular (-1 para finalizar): ");
  scanf("%d", &numSerie);

  while(numSerie > -1){
    printf("A série de fibonacci do numero %d é: %d\n\n\n", numSerie, fibonacci(numSerie));

    printf("Digite a série que deseja calcular (-1 para finalizar): ");
    scanf("%d", &numSerie);
  }
}
