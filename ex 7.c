//digite um nome, calcule e mostre quantas letras tem.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char nome[50];
  int qtd;
  
  printf("Nome:\n");
  gets(nome);

  qtd = (strlen (nome));
  printf("%d letras\n", qtd);
    
}