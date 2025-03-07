#include <stdio.h>

int main() {
    // Definindo duas cartas de países
    char nome1[] = "Brasil";
    int populacao1 = 213993437;
    float area1 = 8515767.049;
    float pib1 = 1.445;
    int pontos_turisticos1 = 12;
    float densidade1 = 25.1;

    char nome2[] = "Argentina";
    int populacao2 = 45195777;
    float area2 = 2780400.0;
    float pib2 = 0.449;
    int pontos_turisticos2 = 8;
    float densidade2 = 16.2;

    int opcao;
    float valor1, valor2;

    printf("Bem-vindo ao Super Trunfo Simplificado!\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Atribui os valores com base na escolha do usuário
    switch (opcao) {
        case 1:
            valor1 = populacao1;
            valor2 = populacao2;
            printf("Atributo escolhido: População\n");
            break;
        case 2:
            valor1 = area1;
            valor2 = area2;
            printf("Atributo escolhido: Área\n");
            break;
        case 3:
            valor1 = pib1;
            valor2 = pib2;
            printf("Atributo escolhido: PIB\n");
            break;
        case 4:
            valor1 = pontos_turisticos1;
            valor2 = pontos_turisticos2;
            printf("Atributo escolhido: Pontos Turísticos\n");
            break;
        case 5:
            valor1 = densidade1;
            valor2 = densidade2;
            printf("Atributo escolhido: Densidade Demográfica\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            return 1; // Encerra o programa se a opção for inválida
    }

    // Exibe os valores das cartas
    printf("\n%s: %.2f\n", nome1, valor1);
    printf("%s: %.2f\n", nome2, valor2);

    // Compara os valores
    if (opcao == 5) {
        // Para densidade demográfica, o menor valor vence
        if (valor1 < valor2) {
            printf("\n%s vence!\n", nome1);
        } else if (valor2 < valor1) {
            printf("\n%s vence!\n", nome2);
        } else {
            printf("\nEmpate!\n");
        }
    } else {
        // Para os outros atributos, o maior valor vence
        if (valor1 > valor2) {
            printf("\n%s vence!\n", nome1);
        } else if (valor2 > valor1) {
            printf("\n%s vence!\n", nome2);
        } else {
            printf("\nEmpate!\n");
        }
    }

    return 0;
}