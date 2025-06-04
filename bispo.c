#include <stdio.h>

int main() {

    //declarada a variavei com o nome das peças do jogo e atribui valor 1 inicial
    int bispo = 1;

    //imprime 5 vezes a direção do Bispo mas considerando que a primeira vez é obrigatória
    do { 
        printf("Cima, Direita\n");
        bispo++; // incrementado para não ocorrer o looping
    
    } while (bispo <= 5);

    return 0;
}
