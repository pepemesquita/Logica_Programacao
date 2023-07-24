#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void abertura(){
    printf("/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}
//valores 
void chuta(char chutes[26], int* tentativas){
    
    char chute;
    printf("Qual é a letra? \n");
    scanf(" %c", &chute);       

    chutes[(*tentativas)] = chute;
    (*tentativas)++;
}

int main(){

    abertura();

    char palavrasecreta[20];

    sprintf(palavrasecreta,"MELANCIA");

    int acertou = 0;
    int enforcou = 0;
    int tentativas = 0;
    
    char chutes[26];
    
    do {

        for (int i = 0; i < strlen(palavrasecreta); i++){
            
            int achou = 0;
            
            // printf("Estou vendo a palavra secreta %d = %c\n",i , palavrasecreta[i]);
            for (int j = 0; j < tentativas; j++){
               // printf("------>>Chute %d = %c\n", j , chutes[j]);
                if (chutes[j] == palavrasecreta[i]){
                 //printf("--------->>Chute correto!!!\n");
                 achou = 1;
                 break;   
                }
            }
            
            if (achou){
                printf("%c ", palavrasecreta[i]);
            }else{
                printf("_ ");
            }
        }
        printf("\n\n");

        //passa o valor das variáveis pra minha função chuta
        chuta(chutes, &tentativas);

      }while(!acertou && !enforcou);

}
