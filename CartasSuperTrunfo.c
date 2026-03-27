#include <stdio.h>

int main() {

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

  int opcao;

  // ===== CARTA 1 =====
  printf("=== CADASTRO CARTA 1 ===\n");

  printf("Numero: ");
  scanf("%d", &carta1);

  printf("Estado: ");
  scanf("%s", estado1);

  printf("Cidade: ");
  scanf("%s", cidade1);

  printf("Populacao: ");
  scanf("%lu", &populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%lf", &pib1);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos1);

  dens1 = populacao1 / area1;
  ppc1 = pib1 / populacao1;
  super1 = populacao1 + area1 + pib1 + pontos1 + ppc1;

  // ===== CARTA 2 =====
  printf("\n=== CADASTRO CARTA 2 ===\n");

  printf("Numero: ");
  scanf("%d", &carta2);

  printf("Estado: ");
  scanf("%s", estado2);

  printf("Cidade: ");
  scanf("%s", cidade2);

  printf("Populacao: ");
  scanf("%lu", &populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%lf", &pib2);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos2);

  dens2 = populacao2 / area2;
  ppc2 = pib2 / populacao2;
  super2 = populacao2 + area2 + pib2 + pontos2 + ppc2;

  // ===== MENU =====
  printf("\n============================\n");
  printf("        MENU\n");
  printf("============================\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turisticos\n");
  printf("5 - Densidade\n");
  printf("6 - PIB per capita\n");
  printf("7 - Super poder\n");
  printf("Escolha: ");
  scanf("%d", &opcao);

  printf("\n============================\n");
  printf("        RESULTADO\n");
  printf("============================\n");

  printf("Carta 1: %s - %s\n", estado1, cidade1);
  printf("Carta 2: %s - %s\n", estado2, cidade2);

  switch(opcao) {

  case 1:
  printf("\nPopulacao\n");
  printf("C1: %lu | C2: %lu\n", populacao1, populacao2);

  if (populacao1 > populacao2)
  printf("Carta 1 venceu!\n");
  else if (populacao2 > populacao1)
  printf("Carta 2 venceu!\n");
  else
  printf("Empate!\n");
  break;

  case 2:
  printf("\nArea\n");
  printf("C1: %.2f | C2: %.2f\n", area1, area2);

  if (area1 > area2)
  printf("Carta 1 venceu!\n");
  else if (area2 > area1)
  printf("Carta 2 venceu!\n");
  else
  printf("Empate!\n");
  break;

  case 3:
  printf("\nPIB\n");
  printf("C1: %.2lf | C2: %.2lf\n", pib1, pib2);

  if (pib1 > pib2)
  printf("Carta 1 venceu!\n");
  else if (pib2 > pib1)
  printf("Carta 2 venceu!\n");
  else
  printf("Empate!\n");
  break;

  case 4:
  printf("\nPontos Turisticos\n");
  printf("C1: %d | C2: %d\n", pontos1, pontos2);

  if (pontos1 > pontos2)
  printf("Carta 1 venceu!\n");
  else if (pontos2 > pontos1)
  printf("Carta 2 venceu!\n");
  else
  printf("Empate!\n");
  break;

  case 5:
  printf("\nDensidade (MENOR vence)\n");
  printf("C1: %.2f | C2: %.2f\n", dens1, dens2);

  if (dens1 < dens2)
  printf("Carta 1 venceu!\n");
  else if (dens2 < dens1)
  printf("Carta 2 venceu!\n");
  else
  printf("Empate!\n");
  break;

  case 6:
  printf("\nPIB per capita\n");
  printf("C1: %.2lf | C2: %.2lf\n", ppc1, ppc2);

  if (ppc1 > ppc2)
  printf("Carta 1 venceu!\n");
  else if (ppc2 > ppc1)
  printf("Carta 2 venceu!\n");
  else
  printf("Empate!\n");
  break;

  case 7:
  printf("\nSuper Poder\n");
  printf("C1: %.2lf | C2: %.2lf\n", super1, super2);

  if (super1 > super2)
  printf("Carta 1 venceu!\n");
  else if (super2 > super1)
  printf("Carta 2 venceu!\n");
  else
  printf("Empate!\n");
  break;

  default:
  printf("\nOpcao invalida!\n");
  }

  return 0;

}