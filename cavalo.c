#include <stdio.h>

int main(){

    // Movimento do cavalo: duas casas para baixo, uma para a esquerda
    // Usando um loop for (obrigatório) e um loop while aninhado

    int cavalo, i;

    printf("\n"); // Linha em branco separando os movimentos

    i = 1;
    cavalo = 1;

    // Loop externo: para os dois passos para baixo

    for (cavalo; cavalo <= 1; cavalo++)
        {
            // Loop aninhado
        while(i <= 2){
            printf("Baixo\n");
            i++;
        }
   
        printf("Esquerda\n");
    }



    return 0;
}