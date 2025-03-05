#include <stdio.h>

int main() {
    // Variáveis para armazenar as informações das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Leitura dos dados da primeira cidade
    printf("Digite o estado da cidade 1: ");
    scanf(" %c", &estado1); // O espaço antes de %c é para consumir o caractere de nova linha (\n)
    printf("Digite o código da cidade 1: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1: ");
    scanf(" %49[^\n]", cidade1); // Lê até 49 caracteres, incluindo espaços
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda cidade
    printf("Digite o estado da cidade 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2: ");
    scanf(" %49[^\n]", cidade2);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a primeira cidade
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB convertido para reais

    // Cálculos para a segunda cidade
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2; // PIB convertido para reais

    // Exibição dos resultados para a primeira cidade
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos resultados para a segunda cidade
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
