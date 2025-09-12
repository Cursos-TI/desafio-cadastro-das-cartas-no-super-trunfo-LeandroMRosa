#include <stdio.h>
#include <string.h>

typedef struct {
    char codigo[4];
    unsigned long int populacao;
    float area;
    float pib;
    int numPontosTuristicos;

    float densidadePopulacional;
    float pibPerCapita;
} Cidade;

// Função para calcular os atributos derivados
void calcularAtributos(Cidade *cidade) {
    if (cidade->area > 0) {
        cidade->densidadePopulacional = (float)cidade->populacao / cidade->area;
    } else {
        cidade->densidadePopulacional = 0.0; 
    }

    if (cidade->populacao > 0) {
        cidade->pibPerCapita = cidade->pib / cidade->populacao;
    } else {
        cidade->pibPerCapita = 0.0; 
    }
}

// Função para calcular o Super Poder
float calcularSuperPoder(Cidade *cidade) {
    float superPoder = 0.0;

    
    superPoder += (float)cidade->populacao;
    superPoder += cidade->area;
    superPoder += cidade->pib;
    superPoder += (float)cidade->numPontosTuristicos;
    superPoder += cidade->pibPerCapita;

    
    if (cidade->densidadePopulacional != 0.0) {
        superPoder += 1.0 / cidade->densidadePopulacional;
    } else {
        
        superPoder += 0.0;
    }

    return superPoder;
}


void compararCartas(Cidade carta1[], Cidade carta2[]) {
    printf("\n\n Comparacao das Cartas \n");

    
    int comparacao[6]; 

    
    if (carta1[0].populacao > carta2[0].populacao) comparacao[0] = 1; else comparacao[0] = 0;
    
    if (carta1[0].area > carta2[0].area) comparacao[1] = 1; else comparacao[1] = 0;
    
    if (carta1[0].pib > carta2[0].pib) comparacao[2] = 1; else comparacao[2] = 0;
    
    if (carta1[0].numPontosTuristicos > carta2[0].numPontosTuristicos) comparacao[3] = 1; else comparacao[3] = 0;
    
    if (carta1[0].densidadePopulacional < carta2[0].densidadePopulacional) comparacao[4] = 1; else comparacao[4] = 0;
    
    if (carta1[0].pibPerCapita > carta2[0].pibPerCapita) comparacao[5] = 1; else comparacao[5] = 0;

    
    printf("\n Carta 1 vs Carta 2 \n");
    printf("Populacao: %d\n", comparacao[0]);
    printf("Area: %d\n", comparacao[1]);
    printf("PIB: %d\n", comparacao[2]);
    printf("Pontos Turisticos: %d\n", comparacao[3]);
    printf("Densidade Populacional: %d\n", comparacao[4]);
    printf("PIB per Capita: %d\n", comparacao[5]);

    
    float superPoder1 = calcularSuperPoder(&carta1[0]);
    float superPoder2 = calcularSuperPoder(&carta2[0]);

    printf("Super Poder: %.2f vs %.2f\n", superPoder1, superPoder2);
    if (superPoder1 > superPoder2) {
        printf("Vencedor Super Poder: Carta 1\n");
    } else if (superPoder2 > superPoder1) {
        printf("Vencedor Super Poder: Carta 2\n");
    } else {
        printf("Super Poder: Empate\n");
    }
}


int main() {
    Cidade carta1[1]; 
    Cidade carta2[1]; 

   
    printf("Cadastro da Carta 1\n");
    printf("Cidade 1 \n");
    strcpy(carta1[0].codigo, "A01");
    printf("Digite a populacao da cidade %s: ", carta1[0].codigo);
    scanf("%lu", &carta1[0].populacao); // %lu para unsigned long int
    printf("Digite a area da cidade %s: ", carta1[0].codigo);
    scanf("%f", &carta1[0].area);
    printf("Digite o PIB da cidade %s: ", carta1[0].codigo);
    scanf("%f", &carta1[0].pib);
    printf("Digite o numero de pontos turisticos da cidade %s: ", carta1[0].codigo);
    scanf("%d", &carta1[0].numPontosTuristicos);
    calcularAtributos(&carta1[0]);

    
    printf("\n Cadastro da Carta 2 \n");
    printf("Cidade 1 \n");
    strcpy(carta2[0].codigo, "B01");
    printf("Digite a populacao da cidade %s: ", carta2[0].codigo);
    scanf("%lu", &carta2[0].populacao); // %lu para unsigned long int
    printf("Digite a area da cidade %s: ", carta2[0].codigo);
    scanf("%f", &carta2[0].area);
    printf("Digite o PIB da cidade %s: ", carta2[0].codigo);
    scanf("%f", &carta2[0].pib);
    printf("Digite o numero de pontos turisticos da cidade %s: ", carta2[0].codigo);
    scanf("%d", &carta2[0].numPontosTuristicos);
    calcularAtributos(&carta2[0]);

    
    printf("\n\n Dados da Carta 1 \n");
    printf("Cidade %s \n", carta1[0].codigo);
    printf("Populacao: %lu\n", carta1[0].populacao);
    printf("Area: %.2f\n", carta1[0].area);
    printf("PIB: %.2f\n", carta1[0].pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1[0].numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1[0].densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", carta1[0].pibPerCapita);

    
    printf("\n\n Dados da Carta 2 \n");
    printf("Cidade %s \n", carta2[0].codigo);
    printf("Populacao: %lu\n", carta2[0].populacao);
    printf("Area: %.2f\n", carta2[0].area);
    printf("PIB: %.2f\n", carta2[0].pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2[0].numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2[0].densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", carta2[0].pibPerCapita);

    
    compararCartas(carta1, carta2);

    return 0;
}