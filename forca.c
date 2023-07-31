#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void abertura(){
    printf("/****************/\n");
    printf("/ Jogo da Forca */\n");
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

int jachutou(char letra, char chutes[26], int tentativas){
    int achou = 0;
    // printf("Estou vendo a palavra secreta %d = %c\n",i , palavrasecreta[i]);
    for (int j = 0; j < tentativas; j++){
    // printf("------>>Chute %d = %c\n", j , chutes[j]);
        if (chutes[j] == letra){
        //printf("--------->>Chute correto!!!\n");
        achou = 1;
        break;   
        }
    }
    return achou;
}

void desenhaforca(char palavrasecreta[20], char chutes[26], int tentativas){
    for (int i = 0; i < strlen(palavrasecreta); i++){
            
            int achou = jachutou(palavrasecreta[i], chutes, tentativas);

            if (achou){
                printf("%c ", palavrasecreta[i]);
            }else{
                printf("_ ");
            }
    }
        printf("\n\n");
}

void escolhepalavra(char palavrasecreta[20]){
    sprintf(palavrasecreta,"MELANCIA");
}

int main(){

    char palavrasecreta[20];

    int acertou = 0;
    int enforcou = 0;
    
    
    char chutes[26];
    int tentativas = 0;

    escolhepalavra(palavrasecreta);
    abertura();

    do {

        //cria a palavra secreta e a quantidade
        desenhaforca(palavrasecreta, chutes, tentativas);
        //passa o valor das variáveis pra minha função chuta
        chuta(chutes, &tentativas);

      }while(!acertou && !enforcou);

}
