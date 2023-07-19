#include <stdio.h>



int main(){
    printf("************************************\n");
    printf("* Bem vindo ao jogo de adivinhação *\n");
    printf("************************************\n\n");

    int numeroSecreto = 42;
    int chute;
    int tentativa = 1;

    for(;;){
        
        printf("Tentativa %d\n", tentativa);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);

        if (chute < 0){
            printf("Você não pode chutar números negativos!\n");
            continue;
        }
        
        int acerto = (chute == numeroSecreto);
        int maior = (chute > numeroSecreto);

            if (acerto){
                printf("Parabéns, você acertou!\n");
                break;
            }
            
            else if (maior){
                    printf("Seu chute foi maior que o número secreto\n");
            }else{
                    printf("Seu chute foi menor que o número secreto\n");
            }
        tentativa++;
        }
        printf("Fim de jogo!\n");
        printf("Você adivinhou o numero em %d tentativas!", tentativa);
}
