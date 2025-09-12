#include <stdio.h>
#include <string.h>

// Define a estrutura para representar uma cidade
typedef struct {
    char codigo[4]; // Ex: A01
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
} Cidade;

int main() {
    // Declaração de duas cartas (cada carta tem 4 cidades)
    Cidade carta1[4];
    Cidade carta2[4];

    // --- Cadastro da Carta 1 ---

    // Cidade 1 da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("--- Cidade 1 ---\n");
    strcpy(carta1[0].codigo, "A01");
    printf("Digite a populacao da cidade %s: ", carta1[0].codigo);
    scanf("%d", &carta1[0].populacao);
    printf("Digite a area da cidade %s: ", carta1[0].codigo);
    scanf("%f", &carta1[0].area);
    printf("Digite o PIB da cidade %s: ", carta1[0].codigo);
    scanf("%f", &carta1[0].pib);
    printf("Digite o numero de pontos turisticos da cidade %s: ", carta1[0].codigo);
    scanf("%d", &carta1[0].numPontosTuristicos);

    // Cidade 2 da Carta 1
    printf("--- Cidade 2 ---\n");
    strcpy(carta1[1].codigo, "A02");
    printf("Digite a populacao da cidade %s: ", carta1[1].codigo);
    scanf("%d", &carta1[1].populacao);
    printf("Digite a area da cidade %s: ", carta1[1].codigo);
    scanf("%f", &carta1[1].area);
    printf("Digite o PIB da cidade %s: ", carta1[1].pib);
    scanf("%f", &carta1[1].pib);
    printf("Digite o numero de pontos turisticos da cidade %s: ", carta1[1].codigo);
    scanf("%d", &carta1[1].numPontosTuristicos);

    // Cidade 3 da Carta 1
    printf("--- Cidade 3 ---\n");
    strcpy(carta1[2].codigo, "A03");
    printf("Digite a populacao da cidade %s: ", carta1[2].codigo);
    scanf("%d", &carta1[2].populacao);
    printf("Digite a area da cidade %s: ", carta1[2].area);
    scanf("%f", &carta1[2].area);
    printf("Digite o PIB da cidade %s: ", carta1[2].pib);
    scanf("%f", &carta1[2].pib);
    printf("Digite o numero de pontos turisticos da cidade %s: ", carta1[2].numPontosTuristicos);

    // Cidade 4 da Carta 1
    printf("--- Cidade 4 ---\n");
    strcpy(carta1[3].codigo, "A04");
    printf("Digite a populacao da cidade %s: ", carta1[3].codigo);
    scanf("%d", &carta1[3].populacao);
    printf("Digite a area da cidade %s: ", carta1[3].area);
    scanf("%f", &carta1[3].area);
    printf("Digite o PIB da cidade %s: ", carta1[3].pib);
    scanf("%f", &carta1[3].pib);
    printf("Digite o numero de pontos turisticos da cidade %s: ", carta1[3].numPontosTuristicos);

    // --- Cadastro da Carta 2 ---

    // Cidade 1 da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("--- Cidade 1 ---\n");
    strcpy(carta2[0].codigo, "B01");
    printf("Digite a populacao da cidade %s: ", carta2[0].codigo);
    scanf("%d", &carta2[0].populacao);
    printf("Digite a area da cidade %s: ", carta2[0].codigo);
    scanf("%f", &carta2[0].area);
    printf("Digite o PIB da cidade %s: ", carta2[0].codigo);
    scanf("%f", &carta2[0].pib);
    printf("Digite o numero de pontos turisticos da cidade %s: ", carta2[0].codigo);
    scanf("%d", &carta2[0].numPontosTuristicos);

    // Cidade 2 da Carta 2
    printf("--- Cidade 2 ---\n");
    strcpy(carta2[1].codigo, "B02");
    printf("Digite a populacao da cidade %s: ", carta2[1].codigo);
    scanf("%d", &carta2[1].populacao);
    printf("Digite a area da cidade %s: ", carta2[1].codigo);
    scanf("%f", &carta2[1].area);
    printf("Digite o PIB da cidade %s: ", carta2[1].pib);
    scanf("%f", &carta2[1].pib);
    printf("Digite o numero de pontos turisticos da cidade %s: ", carta2[1].numPontosTuristicos);

    // Cidade 3 da Carta 2
    printf("--- Cidade 3 ---\n");
    strcpy(carta2[2].codigo, "B03");
    printf("Digite a populacao da cidade %s: ", carta2[2].codigo);
    scanf("%d", &carta2[2].populacao);
    printf("Digite a area da cidade %s: ", carta2[2].area);
    scanf("%f", &carta2[2].area);
    printf("Digite o PIB da cidade %s: ", carta2[2].pib);
    scanf("%f", &carta2[2].pib);
    printf("Digite o numero de pontos turisticos da cidade %s: ", carta2[2].numPontosTuristicos);

    // Cidade 4 da Carta 2
    printf("--- Cidade 4 ---\n");
    strcpy(carta2[3].codigo, "B04");
    printf("Digite a populacao da cidade %s: ", carta2[3].codigo);
    scanf("%d", &carta2[3].populacao);
    printf("Digite a area da cidade %s: ", carta2[3].area);
    scanf("%f", &carta2[3].area);
    printf("Digite o PIB da cidade %s: ", carta2[3].pib);
    scanf("%f", &carta2[3].pib);
    printf("Digite o numero de pontos turisticos da cidade %s: ", carta2[3].numPontosTuristicos);

    // --- Exibição dos Dados da Carta 1 ---
    printf("\n\n--- Dados da Carta 1 ---\n");
    printf("--- Cidade A01 ---\n");
    printf("Populacao: %d\n", carta1[0].populacao);
    printf("Area: %.2f\n", carta1[0].area);
    printf("PIB: %.2f\n", carta1[0].pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1[0].numPontosTuristicos);

    printf("--- Cidade A02 ---\n");
    printf("Populacao: %d\n", carta1[1].populacao);
    printf("Area: %.2f\n", carta1[1].area);
    printf("PIB: %.2f\n", carta1[1].pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1[1].numPontosTuristicos);

    printf("--- Cidade A03 ---\n");
    printf("Populacao: %d\n", carta1[2].populacao);
    printf("Area: %.2f\n", carta1[2].area);
    printf("PIB: %.2f\n", carta1[2].pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1[2].numPontosTuristicos);

    printf("--- Cidade A04 ---\n");
    printf("Populacao: %d\n", carta1[3].populacao);
    printf("Area: %.2f\n", carta1[3].area);
    printf("PIB: %.2f\n", carta1[3].pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1[3].numPontosTuristicos);

    // --- Exibição dos Dados da Carta 2 ---
    printf("\n\n--- Dados da Carta 2 ---\n");
    printf("--- Cidade B01 ---\n");
    printf("Populacao: %d\n", carta2[0].populacao);
    printf("Area: %.2f\n", carta2[0].area);
    printf("PIB: %.2f\n", carta2[0].pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2[0].numPontosTuristicos);

    printf("--- Cidade B02 ---\n");
    printf("Populacao: %d\n", carta2[1].populacao);
    printf("Area: %.2f\n", carta2[1].area);
    printf("PIB: %.2f\n", carta2[1].pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2[1].numPontosTuristicos);

    printf("--- Cidade B03 ---\n");
    printf("Populacao: %d\n", carta2[2].populacao);
    printf("Area: %.2f\n", carta2[2].area);
    printf("PIB: %.2f\n", carta2[2].pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2[2].numPontosTuristicos);

    printf("--- Cidade B04 ---\n");
    printf("Populacao: %d\n", carta2[3].populacao);
    printf("Area: %.2f\n", carta2[3].area