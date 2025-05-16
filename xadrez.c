//Inclua a biblioteca
#include <stdio.h>

//Estabeleça a função principal
int main() {

//Defina as variáveis
    int torre = 1, bispo = 1, rainha = 1;
    int cavalo = 1;

//Faça o movimento das peças usando as funções while, do-while e for (Torre, bispo e rainha)
    while (torre <= 5){
        printf("Torre: Direita\n");
        torre++;
    }

    printf("\n");

    do {
        printf("Bispo: Cima, Direita\n");
        bispo++;
    } while (bispo <= 5);

    printf("\n");

    for (rainha; rainha <= 8; rainha++)
    {
        printf("Rainha: Esquerda\n");
    }

    printf("\n");

//Para o cavalo, use loops aninhados
    while (cavalo <= 1)
    {
        for (int i = 1; i <= 2; i++)
        {
            printf("Cavalo: Baixo\n");
        }
        printf("Cavalo: Esquerda\n");
        cavalo++;
    }

    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
