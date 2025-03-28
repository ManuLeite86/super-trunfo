#include <stdio.h>

int main() {
    char estado1, estado2;
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;

    // Leitura dos dados para a primeira carta
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %49s", nomeCidade1);
    printf("Digite a população da cidade da primeira carta: ");
    scanf(" %d", &populacao1);

    // Leitura dos dados para a segunda carta
    printf("Digite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %49s", nomeCidade2);
    printf("Digite a população da cidade da segunda carta: ");
    scanf(" %d", &populacao2);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);

    return 0;
}
