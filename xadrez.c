#include <stdio.h>

// Função para movimentar a Torre (move para a direita)
void movimentoTorre(int moverTorre) {
    if (moverTorre > 0) {
        printf("Direita\n");
        movimentoTorre(moverTorre - 1);  // chamada recursiva para repetir o movimento
    }
}

// Função para movimentar o Bispo (move diagonal: cima + direita)
void movimentoBispo(int moverBispo) {
    if (moverBispo > 0) {
        // Para simular o movimento diagonal, imprime "Cima" e "Direita"
        for (int i = 1; i <= 1; i++) { 
            printf("Cima\n");
            for (int j = 1; j <= 1; j++) {
                printf("Direita\n");
            }
        }
        movimentoBispo(moverBispo - 1);  // chamada recursiva para repetir o movimento
    }
}

// Função para movimentar a Rainha (move para a esquerda)
void movimentoRainha(int moverRainha) {
    if (moverRainha > 0) {
        printf("Esquerda\n");
        movimentoRainha(moverRainha - 1);  // chamada recursiva para repetir o movimento
    }
}

int main() {
    // Movimentação da Torre
    printf("Movimento da Torre:\n");
    movimentoTorre(5);
    printf("\n");

    // Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    movimentoBispo(5);
    printf("\n");

    // Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    movimentoRainha(8);
    printf("\n");

    // Implementando o movimento do Cavalo no jogo
    printf("Movimento do Cavalo:\n");

    int cima = 1;
    int direita = 1;

    // Executa o movimento do cavalo uma vez
    for (int mov = 1; mov <= 1; mov++) {
        // Loop para subir até 3 vezes, mas controla fluxo com break e continue
        while (cima <= 3) {

            if (cima == 3) {
                // Para o loop quando cima for 3
                break;
            }

            if (cima == 2) {
                // Pula o passo 2 (não imprime "Cima" quando cima == 2)
                cima++;
                continue;
            }

            printf("Cima\n");
            cima++;
        }

        // Loop para mover uma vez para direita
        for (direita = 1; direita <= 1; direita++) {
            printf("Direita\n");
        }
    }

    return 0;
}
