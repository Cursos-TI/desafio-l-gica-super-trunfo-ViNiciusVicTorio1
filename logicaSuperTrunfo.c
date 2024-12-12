#include <stdio.h>

int menu_interativo();
int comparar_atributo(int escolha, float densidade_populacional1, float densidade_populacional2, int populacao1, int populacao2, float area1, float area2, float pib1, float pib2, int pontos_turisticos1, int pontos_turisticos2, float pib_per_capita1, float pib_per_capita2);

int main() {
    // Declaração de variáveis para armazenar dados da cidade
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;

    // Cadastro das cartas
    printf("Cadastro da primeira cidade\n");
    printf("Informe o codigo da cidade: \n");
    scanf("%3s", codigo1);
    printf("Informe o nome da cidade: ");
    scanf("%49s", nome1);
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    printf("Informe a area: ");
    scanf("%f", &area1);
    printf("Informe o pib: ");
    scanf("%f", &pib1);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Cadastro da segunda cidade\n");
    printf("Informe o codigo da cidade: \n");
    scanf("%3s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf("%49s", nome2);
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    printf("Informe a area: ");
    scanf("%f", &area2);
    printf("Informe o pib: ");
    scanf("%f", &pib2);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo das novas propriedades
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados da carta
    printf("\n--- Dados da primeira cidade ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("Pib: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade_populacional1);
    printf("Pib per capita: %.2f\n", pib_per_capita1);
    printf("-------------------\n");

    printf("\n--- Dados da segunda cidade ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("Pib per capita: %.2f\n", pib_per_capita2);
    printf("-------------------\n");

    // Iniciar menu interativo
    while (1) {
        int escolha = menu_interativo();
        if (escolha == 7) {
            break;
        }
        comparar_atributo(escolha, densidade_populacional1, densidade_populacional2, populacao1, populacao2, area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, pib_per_capita1, pib_per_capita2);
    }

    return 0;
}

int menu_interativo() {
    int escolha;
    printf("\nEscolha um atributo para comparar:\n");
    printf("1. Densidade populacional\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Pontos turísticos\n");
    printf("6. PIB per capita\n");
    printf("7. Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    return escolha;
}

int comparar_atributo(int escolha, float densidade_populacional1, float densidade_populacional2, int populacao1, int populacao2, float area1, float area2, float pib1, float pib2, int pontos_turisticos1, int pontos_turisticos2, float pib_per_capita1, float pib_per_capita2) {
    switch (escolha) {
        case 1:
            printf("Densidade populacional: ");
            if (densidade_populacional1 > densidade_populacional2) {
                printf("Cidade 1 vence\n");
            } else if (densidade_populacional1 < densidade_populacional2) {
                printf("Cidade 2 vence\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 2:
            printf("População: ");
            if (populacao1 > populacao2) {
                printf("Cidade 1 vence\n");
            } else if (populacao1 < populacao2) {
                printf("Cidade 2 vence\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 3:
            printf("Área: ");
            if (area1 > area2) {
                printf("Cidade 1 vence\n");
            } else if (area1 < area2) {
                printf("Cidade 2 vence\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 4:
            printf("PIB: ");
            if (pib1 > pib2) {
                printf("Cidade 1 vence\n");
            } else if (pib1 < pib2) {
                printf("Cidade 2 vence\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 5:
            printf("Pontos turísticos: ");
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Cidade 1 vence\n");
            } else if (pontos_turisticos1 < pontos_turisticos2) {
                printf("Cidade 2 vence\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 6:
            printf("PIB per capita: ");
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Cidade 1 vence\n");
            } else if (pib_per_capita1 < pib_per_capita2) {
                printf("Cidade 2 vence\n");
            } else {
                printf("Empate\n");
            }
            break;
        default:
            printf("Escolha inválida.\n");
    }
    return 0;
}