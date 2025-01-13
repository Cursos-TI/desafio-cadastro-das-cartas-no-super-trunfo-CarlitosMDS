#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    int codigo, populacao, area, pib, npt;
    char nome[50];
    
    printf("Desafio xadrez!\n");

    printf("Nome da cidade:\n");
    scanf("%s", &nome);

    printf("População:\n");
    scanf("%d", &populacao);

    printf("Area:\n");
    scanf("%d", &area);

    printf("PIB:\n");
    scanf("%d", &pib);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &npt);


    printf("Nome da Cidade: %s \n", &nome);
    printf("População: %d \n", &populacao);
    printf("Area: %d \n", &area);
    printf("PIB: %d\n", &pib);
    printf("Numero de pontos turisticos: %d \n", &npt);
    

    return 0;
}
