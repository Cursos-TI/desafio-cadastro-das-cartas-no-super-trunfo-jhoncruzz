#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //declaração das variaveis para primeira carta
    
    char estado1;
    char codigo2[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //declaração das variaveis para segunda carta

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int população2;
    float area2;
    float pib2;
    int pontosturisticos2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Entrada de dados para primeira carta
    printf("Digite o estado da carta1 (A-H):");
        scanf("%c", &estado1);
    printf("Digite o código da carta 1 (Ex:A01)");
        scanf("%s", codigo1);
    prinf("Digite o nome da cidade da carta 1:")
        scanf("%[^\n]", nomeCidade1);
    printf("Digite a população da carta1:");
        scanf("%d", &populacao1);
    printf("Digite a área da cidade da carta1(km²):");
        scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1:");
        scanf("%d", &pib1);
    printf("Digite o número de pontos turistico da carta 1:");
        scanf("%d", &pontosturistico1);
    
 //Entrada de dados para segunda carta
    printf("Digite o estado da carta 2 (A-H):");
        scanf("%c", &estado2);
    printf("Digite o código da carta 2 (Ex:A01)");
        scanf("%s", codigo2);
    prinf("Digite o nome da cidade da carta 2:")
        scanf("%[^\n]", nomeCidade2);
    printf("Digite a população da carta 2:");
        scanf("%d", &populacao2);
    printf("Digite a área da cidade da carta 2(km²):");
        scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2:");
        scanf("%d", &pib2);
    printf("Digite o número de pontos turistico da carta 2:");
        scanf("%d", &pontosturistico2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
// Exibição dos Dados da primeira Carta:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    
 // Exibição dos Dados da segunda Carta:
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    return 0;
}
