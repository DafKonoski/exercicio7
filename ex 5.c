#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int main(){ 
    //nome, endereço e telefone
    char nome[20];
    char endereco[30];
    int telefone;

    printf("Nome:\n");
    gets(nome);

    printf("Endereco:\n");
    gets(endereco);

    printf("Telefone:\n");
    scanf("%d", &telefone);
    
    printf("Nome: ");
    for(int i = 0; i < strlen(nome); i++){
        printf("\%c", nome[i]);
    }
    printf("\n\n");
    
    printf("Endereco: ");
    for(int j = 0; j < strlen(endereco); j++){
        printf("\%c", endereco[j]);
    }
    printf("\n\n");

    printf("Telefone: %d\n", telefone);

}