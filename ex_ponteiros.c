/*Escreva uma função soma que recebe 
um ponteiro de inteiro num e mais dois inteiros a e b. 
A função deve calcular a soma de a+b em num.*/


void soma(int* num, int a, int b){
    *num = a + b;
}

int main(){
    int num;
    int a = 6;
    int b = 20;

    soma(&num, a, b);

    printf("A soma dos inteiros eh: %d", num);

}