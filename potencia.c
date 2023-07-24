#include <stdio.h>

potencia(int* resultado, int a, int b){
    *resultado = 1;
    for ( int i = 1; i < b; i++){
        *resultado = *resultado * a;
    }    
}

int main(){
    int resultado;
    potencia(&resultado, 10, 5);
    printf("%d", resultado);
}