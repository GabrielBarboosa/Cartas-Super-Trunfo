#include <stdio.h>

int main() {
    printf("Cartas Super Trunfo!\n");

    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float pib1, pib2;
    float area1, area2;

    printf("\nCadastre os dados da primeira carta:\n");
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("\nCadastre os dados da segunda carta:\n");
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("\n--- Dados das Cartas Cadastradas ---\n");

    printf("\nCarta 1:\n");
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("PIB: %.2f\n", pib1);
    printf("Área: %.2f km²\n", area1);

    printf("\nCarta 2:\n");
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("PIB: %.2f\n", pib2);
    printf("Área: %.2f km²\n", area2);

    return 0;
}
