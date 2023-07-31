#include <stdio.h>
/*Escreva uma função soma que recebe 
um array de inteiros e o tamanho do array, 
e retorna a soma dos números desse array.*/
int soma(int* nums, int n){
    
    int total = 0;
    for (int i = 0; i < n; i++){
        printf("Teste %d\n", nums[i]);
        total += nums[i];        
        printf("%d \n", total);    
        }
    return total;
}

int main(){
    int nums[3];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    int total = soma(nums, 3);
    printf("%d", total);
}


