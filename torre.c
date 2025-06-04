#include <stdio.h>

int main() {

    //declarada as variaveis com o nome das peça do jogo e atribui o valor inicial 1
    int torre = 1;
    
    //imprime 5 vezes a direção da torre conforme solicitado
    while(torre <= 5) {
        printf("Direita\n");
        torre++; // incrementado para não ocorrer o looping
    }

    return 0;
}
