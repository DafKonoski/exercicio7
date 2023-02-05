#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char nome[50];
  char sexo[2];
  char sexoF[2] = "f";
  int idade;
  
  printf("Nome:\n");
  gets(nome);

  printf("Sexo:\n");
  scanf("%c", &sexo);

  printf("Idade:\n");
  scanf("%d", &idade);

  if(strcmp (sexo, sexoF) == 0){
    if(idade < 25){
      printf("ACEITA\n");
    }
  }
  else{
    printf("NAO ACEITA\n");
  }
  
}