#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavrasecreta[20];

    sprintf(palavrasecreta,"MELANCIA");
    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    do {

        for (int i = 0; i < strlen(palavrasecreta); i++){
            printf("_ ");
            
        }
        printf("\n\n");
        
        char chute;
        scanf(" %c", &chute);       

        chutes[tentativas] = chute;
        tentativas++;
        
        }while(!acertou && !enforcou);
}