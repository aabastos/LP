//Inclusão de bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct aluno{
  int numMatricula;
  char nome[100];
};

typedef struct aluno Aluno;

int main(){
  Aluno alunos[10];
  int numAlunos;
  char opc;

  numAlunos = 0;

  printf("Deseja adicionar algum aluno (s/n): ");
  scanf("%c\n", %opc);
  while(opc == 's'){
    printf("Digite o numero de matricula do aluno: ");
    scanf("%d", alunos[numAlunos].numMatricula);
    printf("Digite o nome do aluno: ");
    scanf("%d", alunos[numAlunos].nome);

    numAlunos++;
  }

  for(int i = 0; i < numAlunos; i++){
    printf("Numero de matricula: %d\nNome do aluno: %s\n\n", alunos[i].numMatricula, alunos[i].nome);
  }
}
