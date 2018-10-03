#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct aluno{
  int numMatricula;
  char nome[100];
};

typedef struct aluno Aluno;

void modifica(Aluno *aluno){
  aluno -> numMatricula = 1;
  strcpy(aluno -> nome, "Aluno");
}

int main(){
  Aluno *aluno = malloc(sizeof *aluno);
  modifica(aluno);

  printf("%d, %s\n", aluno -> numMatricula, aluno -> nome);
}
