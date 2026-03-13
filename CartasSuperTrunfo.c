#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades

    // Carta 1
    char estado1;
    char CodidoDaCarta1[10];
    char NomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int NumeroPontosTuristicos1;

    // Carta 2
    char estado2;
    char CodidoDaCarta2[10];
    char NomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int NumeroPontosTuristicos2;

    printf("Cadastro da carta 1:\n");

    printf("Digite o estado da cidade: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", CodidoDaCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", NomeCidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &NumeroPontosTuristicos1);

    printf("\nCadastro da carta 2:\n");

    printf("Digite o estado da cidade: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", CodidoDaCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", NomeCidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &NumeroPontosTuristicos2);

    // Área para exibição dos dados da cidade
    printf("\nDados da carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", CodidoDaCarta1);
    printf("Nome: %s\n", NomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f %s\n", area1, "m²");
    printf("PIB: R$ %.2f Bilhões de Reais\n", pib1);
    printf("Pontos Turísticos: %d\n", NumeroPontosTuristicos1);

    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", CodidoDaCarta2);
    printf("Nome: %s\n", NomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f %s\n", area2, "m²");
    printf("PIB: R$ %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", NumeroPontosTuristicos2);

    return 0;
}