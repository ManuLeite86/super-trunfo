
#include <stdio.h>

typedef struct {
    char estado;
    char codigo[6];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

void lerDadosCarta(Carta *carta) {
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &carta->estado);
    printf("\n");
    printf("Digite o código da carta (XXYY): ");
    scanf(" %5s", carta->codigo);
    printf("\n");
    printf("Digite o nome da cidade da carta: ");
    scanf(" %49s", carta->nomeCidade);
    printf("\n");
    printf("Digite a população da cidade da carta: ");
    scanf(" %d", &carta->populacao);
    printf("\n");
    printf("Digite a área da cidade da carta (em km²): ");
    scanf(" %f", &carta->area);
    printf("\n");
    printf("Digite o PIB da cidade da carta (em bilhões de reais): ");
    scanf(" %f", &carta->pib);
    printf("\n");
    printf("Digite o número de pontos turísticos da cidade da carta: ");
    scanf(" %d", &carta->pontosTuristicos);
    printf("\n");
    carta->densidadePopulacional = (float)carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / (float)carta->populacao;
    carta->superPoder = carta->densidadePopulacional + carta->pibPerCapita + carta->pontosTuristicos;
}

void exibirDadosCarta(Carta carta) {
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta.pibPerCapita);
    printf("Super Poder: %.2f\n", carta.superPoder);
}

void compararCartas(Carta carta1, Carta carta2) {
    printf("Comparando cartas...\n");
    if (carta1.densidadePopulacional > carta2.densidadePopulacional) {
        printf("Carta 1 tem densidade populacional maior.\n");
    } else if (carta2.densidadePopulacional > carta1.densidadePopulacional) {
        printf("Carta 2 tem densidade populacional maior.\n");
    } else {
        printf("As cartas têm densidade populacional igual.\n");
    }
    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("Carta 1 tem PIB per capita maior.\n");
    } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
        printf("Carta 2 tem PIB per capita maior.\n");
    } else {
        printf("As cartas têm PIB per capita igual.\n");
    }
    if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
        printf("Carta 1 tem mais pontos turísticos.\n");
    } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
        printf("Carta 2 tem mais pontos turísticos.\n");
    } else {
        printf("As cartas têm o mesmo número de pontos turísticos.\n");
    }
    if (carta1.superPoder > carta2.superPoder) {
        printf("Carta 1 tem super2.\n");
    } else if (carta2.superPoder > carta1.superPoder) {
        printf("Carta 2 tem super poder.\n");
    } else {
        printf("As cartas têm super poder igual.\n");
    }
}

int main() {
    Carta carta1, carta2;

    printf("Digite os dados da carta 1:\n");
    lerDadosCarta(&carta1);

    printf("Digite os dados da carta 2:\n");
    lerDadosCarta(&carta2);

    printf("Dados da carta 1:\n");
    exibirDadosCarta(carta1);

    printf("Dados da carta 2:\n");
    exibirDadosCarta(carta2);

    compararCartas(carta1, carta2);

    return 0;
}
