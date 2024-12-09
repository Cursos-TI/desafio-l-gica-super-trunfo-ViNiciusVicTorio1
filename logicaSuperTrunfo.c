#include <stdio.h>

int main() {

// Declaração de variaveis para armazenar dados da cidade

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

    printf("Informe o codigo da cidadade: \n");
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

    printf("Informe o codigo da cidadade: \n");
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

//Cálculo das novas propriedades
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

// Exibição dos dados da carta
    printf("\n--- Dados da primeira cidade ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %2.f\n", area1);
    printf("Pib: %2.f\n", pib1);
    printf("Pontos turísticos: %d\n",pontos_turisticos1);
    printf("Densidade populacional: %2.f\n", densidade_populacional1);
    printf("Pib per capita: %2.f\n", pib_per_capita1);
    printf("-------------------\n");
   
    printf("\n--- Dados da segunda cidade ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %2.f\n", area2);
    printf("Pib: %2.f\n", pib2);
    printf("Pontos turísticos: %d\n",pontos_turisticos2);
    printf("Densidade populacional: %2.f\n", densidade_populacional2);
    printf("Pib per capita: %2.f\n", pib_per_capita2);
    printf("-------------------\n");

//Comparação das propriedades e determinação da carta vencedora
    printf("\n--- Comparação das cidades ---\n");

    printf("Densidade populacional: ");
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Cidade1 vence\n");
    } else if (densidade_populacional1 > densidade_populacional2) {
        printf("Cidade2 vence\n");
    }

    printf("População: ");
    if (populacao1 > populacao2) {
        printf("Cidade1 vence\n");
    } else if (populacao1 < populacao2) {
        printf("Cidade2 vence\n");
    }

    printf("Área: ");
    if (area1 > area2) {
        printf("Cidade1 vence\n");
    } else if (area1 < area2) {
        printf("Cidade2 vence\n");      
    }

    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Cidade1 vence\n");
    } else if(pib1 < pib2) {
        printf("Cidade2 vence\n");
    }

    printf("Pontos Turísticos: ");
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Cidade1 vence\n");
    } else if(pontos_turisticos1 < pontos_turisticos2){
        printf("Cidades2 vence\n");
    }

    printf("PIB per capita: ");
    if(pib_per_capita1 > pib_per_capita2) {
        printf("Cidade1 vence\n");
    } else if(pib_per_capita1 < pib_per_capita2) {
        printf("Cidade2 vence\n");
    }
   
    return 0;
}