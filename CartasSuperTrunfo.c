#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int carta1, carta2;
  char estado1[50], cidade1[50];
  char estado2[50], cidade2[50];

  unsigned long populacao1, populacao2;
  float area1, area2;
  double pib1, pib2;
  int pontos1, pontos2;

  float dens1, dens2;
  double ppc1, ppc2;
  double super1, super2;

  // Área para entrada de dados
  printf("=== CADASTRO CARTA 1 ===\n");
  printf("Numero da carta: ");
  scanf("%d", &carta1);

  printf("Estado (sem espaco, ex: Ceara): ");
  scanf("%49s", estado1);

  printf("Cidade (sem espaco, ex: Fortaleza): ");
  scanf("%49s", cidade1);

  printf("Populacao: ");
  scanf("%lu", &populacao1);

  printf("Area (km2) (maior que 0): ");
  scanf("%f", &area1);

  printf("PIB (reais): ");
  scanf("%lf", &pib1);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos1);

  dens1 = (float)populacao1 / area1;
  ppc1  = pib1 / (double)populacao1;
  super1 = (double)populacao1 + (double)area1 + pib1 + (double)pontos1 + ppc1;
  
  printf("\n=== CADASTRO CARTA 2 ===\n");
  printf("Numero da carta: ");
  scanf("%d", &carta2);

  printf("Estado (sem espaco): ");
  scanf("%49s", estado2);

  printf("Cidade (sem espaco): ");
  scanf("%49s", cidade2);

  printf("Populacao: ");
  scanf("%lu", &populacao2);

  printf("Area (km2) (maior que 0): ");
  scanf("%f", &area2);

  printf("PIB (reais): ");
  scanf("%lf", &pib2);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos2);

  dens2 = (float)populacao2 / area2;
  ppc2  = pib2 / (double)populacao2;
  super2 = (double)populacao2 + (double)area2 + pib2 + (double)pontos2 + ppc2;
  // Área para exibição dos dados da cidade
  printf("\n==============================\n");
  printf("        RESULTADOS\n");
  printf("==============================\n");

  printf("\n--- CARTA 1 ---\n");
  printf("Carta: %d\n", carta1);
  printf("Estado: %s\n", estado1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos turisticos: %d\n", pontos1);
  printf("Densidade: %.2f hab/km2\n", dens1);
  printf("PIB per capita: %.2f\n", ppc1);
  printf("Super poder: %.2f\n", super1);

  printf("\n--- CARTA 2 ---\n");
  printf("Carta: %d\n", carta2);
  printf("Estado: %s\n", estado2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos turisticos: %d\n", pontos2);
  printf("Densidade: %.2f hab/km2\n", dens2);
  printf("PIB per capita: %.2f\n", ppc2);
  printf("Super poder: %.2f\n", super2);

  printf("\n==============================\n");
  printf("        COMPARACAO\n");
  printf("==============================\n");

  printf("Populacao: %s\n", (populacao1 > populacao2) ? "Carta 1 vence" : "Carta 2 vence ou empata");
  printf("Area: %s\n", (area1 > area2) ? "Carta 1 vence" : "Carta 2 vence ou empata");
  printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 vence" : "Carta 2 vence ou empata");
  printf("Pontos turisticos: %s\n", (pontos1 > pontos2) ? "Carta 1 vence" : "Carta 2 vence ou empata");
  printf("Densidade: %s\n", (dens1 > dens2) ? "Carta 1 vence" : "Carta 2 vence ou empata");
  printf("PIB per capita: %s\n", (ppc1 > ppc2) ? "Carta 1 vence" : "Carta 2 vence ou empata");
  printf("Super poder: %s\n", (super1 > super2) ? "Carta 1 vence" : "Carta 2 vence ou empata");

    return 0;
}

return 0;
} 
