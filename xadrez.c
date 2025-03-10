#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

#include <stdio.h>

int main() {
    // Movimentação da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    // Movimentação do Bispo (5 casas na diagonal Cima e Direita)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }
    
    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    
    return 0;
}
Explicação do Código:
Torre:
Utilizamos um laço for para simular o movimento da Torre. A Torre move-se 5 casas para a direita, então imprimimos "Direita" 5 vezes.
Bispo:
Utilizamos um laço while para simular o movimento do Bispo. O Bispo move-se 5 casas na diagonal "Cima, Direita", portanto, imprimimos essa combinação 5 vezes.
Rainha:
Utilizamos um laço do-while para simular o movimento da Rainha. A Rainha move-se 8 casas para a esquerda, então imprimimos "Esquerda" 8 vezes.
Como Funciona:
Cada uma das peças se move conforme sua regra específica, e as direções dos movimentos são exibidas no console conforme o número de casas que a peça se move.
O laço for é utilizado para a Torre, o laço while para o Bispo e o laço do-while para a Rainha.
Saída Esperada:
Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo:
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Movimento da Rainha:
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Detalhes:
Cada peça segue sua movimentação específica de acordo com a solicitação.
