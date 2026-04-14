#include <stdio.h>
#include <string.h>

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

    int op1, op2;

    double v1_c1, v1_c2;
    double v2_c1, v2_c2;

    // ================= CADASTRO =================
    printf("=== CARTA 1 ===\n");

    scanf("%d", &carta1); getchar();
    fgets(estado1, 50, stdin);
    estado1[strcspn(estado1, "\n")] = '\0';

    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    scanf("%lu", &populacao1);
    scanf("%f", &area1);
    scanf("%lf", &pib1);
    scanf("%d", &pontos1);

    dens1 = populacao1 / area1;
    ppc1 = pib1 / populacao1;

    printf("\n=== CARTA 2 ===\n");

    scanf("%d", &carta2); getchar();
    fgets(estado2, 50, stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    scanf("%lu", &populacao2);
    scanf("%f", &area2);
    scanf("%lf", &pib2);
    scanf("%d", &pontos2);

    dens2 = populacao2 / area2;
    ppc2 = pib2 / populacao2;

    // ================= MENU =================
    printf("\nEscolha o 1º atributo:\n");
    printf("1-Populacao 2-Area 3-PIB 4-Turismo 5-Densidade 6-PPC\n");
    scanf("%d", &op1);

    printf("\nEscolha o 2º atributo (diferente):\n");
    scanf("%d", &op2);

    if (op1 == op2) {
        printf("Erro: atributos iguais!\n");
        return 0;
    }

    // ================= ATRIBUTO 1 =================
    switch (op1) {
        case 1: v1_c1 = populacao1; v1_c2 = populacao2; break;
        case 2: v1_c1 = area1; v1_c2 = area2; break;
        case 3: v1_c1 = pib1; v1_c2 = pib2; break;
        case 4: v1_c1 = pontos1; v1_c2 = pontos2; break;
        case 5: v1_c1 = -dens1; v1_c2 = -dens2; break;
        case 6: v1_c1 = ppc1; v1_c2 = ppc2; break;
        default: printf("Opcao invalida\n"); return 0;
    }

    // ================= ATRIBUTO 2 =================
    switch (op2) {
        case 1: v2_c1 = populacao1; v2_c2 = populacao2; break;
        case 2: v2_c1 = area1; v2_c2 = area2; break;
        case 3: v2_c1 = pib1; v2_c2 = pib2; break;
        case 4: v2_c1 = pontos1; v2_c2 = pontos2; break;
        case 5: v2_c1 = -dens1; v2_c2 = -dens2; break;
        case 6: v2_c1 = ppc1; v2_c2 = ppc2; break;
        default: printf("Opcao invalida\n"); return 0;
    }

    // ================= SOMA =================
    double soma1 = v1_c1 + v2_c1;
    double soma2 = v1_c2 + v2_c2;

    // ================= RESULTADO =================
    printf("\nCarta 1: %s - %s\n", estado1, cidade1);
    printf("Carta 2: %s - %s\n", estado2, cidade2);

    printf("\nSoma C1: %.2lf", soma1);
    printf("\nSoma C2: %.2lf\n", soma2);

    if (soma1 != soma2) {
        if (soma1 > soma2) {
            printf("\n>>> CARTA 1 VENCEU <<<\n");
        } else {
            printf("\n>>> CARTA 2 VENCEU <<<\n");
        }
    } else {
        printf("\n>>> EMPATE <<<\n");
    }

    return 0;
}