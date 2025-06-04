#include <stdio.h>

int main() {

    //declarada as variaveis com o nome das peças do jogo
    int torre, bispo, rainha, cavalo;

    //atribui o valor 1 a todos pois seria o inicio da contagem
    torre = 1;
    bispo = 1;
    rainha = 1;
    cavalo = 1;
    
    //imprime 5 vezes a direção da torre conforme solicitado
    while(torre <= 5) {
        printf("Torre - Direita\n");
        torre++; // incrementado para não ocorrer o looping
    }

    //imprime 5 vezes a direção do Bispo mas considerando que a primeira vez é obrigatória
    do { 
        printf("Bispo - Cima\n");
        printf("Bispo - Direita\n");
         bispo++; // incrementado para não ocorrer o looping
    
    } while (bispo <= 5);

    // imprime 8 vezes a direção da rainha utilizando o for
    for(rainha; rainha <= 8; rainha++) {
        printf("Rainha - Esquerda\n");
    }

    //implementando o cavalo no jogo

    printf("\n"); // Linha em branco separando o cavalo das outras peças

    int i = 1; // adicionado varíavel i para implementar loop aninhado

    // Loop externo: para os dois passos para baixo

    for (cavalo; cavalo <= 1; cavalo++)
        {
            // Loop aninhado
        while(i <= 2){
            printf("Cavalo - Baixo\n");
            i++;
        }
   
        printf("Cavalo - Esquerda\n");
    }

    return 0;
}

  // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.