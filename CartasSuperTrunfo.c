#include <stdio.h>

int main() {

// Declaração de variaveis para armazenar dados da cidade

    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;

// Cadastro das cartas

    printf("Cadastro da cidade\n");

    printf("Informe o codigo da cidadade: \n");
    scanf("%s", codigo);

    printf("Informe o nome da cidade: ");
    scanf("%s", nome);

    printf("Informe a população: ");
    scanf("%d", &populacao);

    printf("Informe a area: ");
    scanf("%f", &area);

    printf("Informe o pib: ");
    scanf("%f", &pib);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

//Cálculo das novas propriedades
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

// Exibição dos dados da carta
    printf("\n--- Dados da cidade ---\n");
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %2.f\n", area);
    printf("Pib: %2.f\n", pib);
    printf("Pontos turísticos: %d\n",pontos_turisticos);
    printf("Densidade populacional: %2.f\n", densidade_populacional);
    printf("Pib per capita: %2.f\n", pib_per_capita);
    printf("-------------------\n");
    
    return 0;
}
