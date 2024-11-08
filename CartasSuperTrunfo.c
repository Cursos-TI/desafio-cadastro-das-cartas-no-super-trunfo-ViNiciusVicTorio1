#include <stdio.h>

int main() {

// Declaração de variaveis para armazenar dados da cidade

    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

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

// Exibição dos dados da carta
    printf("\n--- Dados da cidade ---\n");
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Pontos turísticos: %d\n",pontos_turisticos);
    printf("-------------------\n");
    
    return 0;
}
