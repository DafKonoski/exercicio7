#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    char nome[20];

    printf("Digite um nome\n");
    gets (nome);
    
    for(int j = 0; j <10; j++){
        for(int i = 0; i <=strlen(nome); i++){
            printf("\%c", nome[i]);
        }
        printf("\n");
    }
}