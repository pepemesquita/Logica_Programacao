#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){    

    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhação!\n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    
    int chute;
    int acertou;
    int nivel;
    int numerodetentativas;

    double pontuacao = 1000;

    srand(time(0));
    int numeroSecreto = rand() % 100;

    printf("Qual o nivel de dificudade desejado?\n");
    printf("(1) Fácil (2) Médio (3) Dificil\n");
    printf("Escolha: ");

    scanf(" %d", &nivel);

    switch (nivel){
    case 1:
        numerodetentativas = 20;    
        break;
    case 2:
        numerodetentativas = 15;
        break;
    default:
        numerodetentativas = 6;
        break;
    }

    for(int i = 1; i <= numerodetentativas; i++){
        
        printf("Tentativa %d de %d\n", i, numerodetentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);

        if (chute < 0){
            printf("Você não pode chutar números negativos!\n");
            i--;
            continue;
        }
        
        acertou = chute == numeroSecreto;
        

        if(acertou){
            break;
        }else if (chute > numeroSecreto){
           printf("Seu chute foi maior que o número secreto\n");
        }else{
            printf("Seu chute foi menor que o número secreto\n");

        }

        double pontosperdidos = abs(chute - numeroSecreto) / (double)2;
        pontuacao = pontuacao - pontosperdidos;
    }
    
    printf("\n");
    if(acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\nParabéns! Você acertou!\n");
        printf("Você fez %.2f pontos. Até a próxima!\n\n", pontuacao);
        } else {

        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");

        printf("\nVocê perdeu! Tente novamente!\n\n");
        }
}
       

