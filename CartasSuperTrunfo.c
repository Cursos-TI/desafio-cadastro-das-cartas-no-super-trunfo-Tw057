#include <stdio.h>


 

int main() {
      char estado1[20], codigo1[20], nome1[20];
    int populacao1, pontos1;
    float area1, pib1;

    char estado2[20], codigo2[20], nome2[20];
    int populacao2, pontos2;
    float area2, pib2;

    // Carta 1
    printf("Carta 1\n");
    printf("Qual a letra do estado? ");
    scanf("%s", estado1);

    printf("Qual o código da carta? ");
    scanf("%s", codigo1);

    printf("Qual o nome da cidade? ");
    scanf("%s", nome1);

    printf("Qual o tamanho da população? ");
    scanf("%d", &populacao1);

    printf("Área em km²? ");
    scanf("%f", &area1);

    printf("Qual o PIB? ");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos? ");
    scanf("%d", &pontos1);

    // Imprimir carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n\n",
        estado1, codigo1, nome1, populacao1, area1, pib1, pontos1);

    // Carta 2
    printf("Carta 2\n");
    printf("Qual a letra do estado? ");
    scanf("%s", estado2);

    printf("Qual o código da carta? ");
    scanf("%s", codigo2);

    printf("Qual o nome da cidade? ");
    scanf("%s", nome2);

    printf("Qual o tamanho da população? ");
    scanf("%d", &populacao2);

    printf("Área em km²? ");
    scanf("%f", &area2);

    printf("Qual o PIB? ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos? ");
    scanf("%d", &pontos2);

    // Imprimir carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n",
        estado2, codigo2, nome2, populacao2, area2, pib2, pontos2);

    return 0;
}
