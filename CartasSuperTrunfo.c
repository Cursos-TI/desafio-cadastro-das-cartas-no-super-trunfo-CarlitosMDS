#include <stdio.h>

int main() {
    // Declarando as variáveis do código.
    char estado1[50], nomCid1[50], estado2[50], nomCid2[50];
    int codCid1, pt1, codCid2, pt2;
    float pop1, area1, pib1, pop2, area2, pib2;

    printf("***Bem Vindos ao COMPARADOR!!***\n");

    // Captando as informações da primeira carta
    printf("Digite o Código da Cidade:\n");
    scanf("%d", &codCid1);
    printf("Digite o nome do Estado:\n");
    scanf("%s", estado1);
    printf("Digite o nome da Cidade:\n");
    scanf("%s", nomCid1);
    printf("Digite a População:\n");
    scanf("%f", &pop1);
    printf("Digite a Área:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite os Pontos Turisticos:\n");
    scanf("%d", &pt1);
    
    // Captando as informações da segunda carta
    printf("***Agora os dados da outra CARTA***\n");
    printf("Digite o Código da Cidade:\n");
    scanf("%d", &codCid2);
    printf("Digite o nome do Estado:\n");
    scanf("%s", estado2);
    printf("Digite o nome da Cidade:\n");
    scanf("%s", nomCid2);
    printf("Digite a População:\n");
    scanf("%f", &pop2);
    printf("Digite a Área:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite os Pontos Turisticos:\n");
    scanf("%d", &pt2);

    // Informando os resultados que foram armazenados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código cidade: %d\n", codCid1);
    printf("Cidade: %s\n", nomCid1);
    printf("População: %.2f\n", pop1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pt1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código cidade: %d\n", codCid2);
    printf("Cidade: %s\n", nomCid2);
    printf("População: %.2f\n", pop2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pt2);

    return 0;
}
