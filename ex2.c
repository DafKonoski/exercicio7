#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char nome[20];

    printf("Digite um nome\n");
    gets(nome);

    for(int i = 0; i<= strlen(nome); i+=2){
        printf("\%c", nome[i]);
    }
    printf("\n\n");

    return 0;
}