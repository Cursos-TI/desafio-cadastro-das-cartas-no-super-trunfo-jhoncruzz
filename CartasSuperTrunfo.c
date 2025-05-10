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
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float inversoDensidade1;
    float superPoder1;
    

    //declaração das variaveis para segunda carta

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float inversoDensidade2;
    float superPoder2;
    int resulpopulacao;
    int resularea;
    int resulpib;
    int resulpontosturisticos;
    int resuldensidade;
    int resulpibpercapita;
    int resulsuperPoder;
    

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Entrada de dados para primeira carta
    printf("Digite o estado da carta1 (A-H):");
        scanf("%c", &estado1);
    printf("Digite o código da carta 1 (Ex:A01)");
        scanf(" %s", codigo1);
    printf("Digite o nome da cidade da carta 1:");
        scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população da carta1:");
        scanf("%lu", &populacao1);
    printf("Digite a área da cidade da carta1(km²):");
        scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1:");
        scanf("%f", &pib1);
    printf("Digite o número de pontos turistico da carta 1:");
        scanf("%d", &pontosturisticos1);
        // Calculo de Densidade Populacional 1
    densidadepopulacional1 = populacao1 / area1;
    // Calculo do Pib Percapita 1
    pibpercapita1 = pib1 / populacao1;
    // calculo do inverso de densidade 1
    inversoDensidade1 = 1/ densidadepopulacional1;
    // calculo super poder1
    superPoder1 = populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibpercapita1 + inversoDensidade1;

    
 //Entrada de dados para segunda carta
    printf("\nDigite o estado da carta 2 (A-H):");
        scanf(" %c", &estado2);
    printf("Digite o código da carta 2 (Ex:A01)");
        scanf(" %s", codigo2);
    printf("Digite o nome da cidade da carta 2:");
        scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população da carta 2:");
        scanf("%lu", &populacao2);
    printf("Digite a área da cidade da carta 2(km²):");
        scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2:");
        scanf("%f", &pib2);
    printf("Digite o número de pontos turistico da carta 2:");
        scanf("%d", &pontosturisticos2);
        // Calculo de Densidade Populacional 2
        densidadepopulacional2 = populacao2 / area2;
        // Calculo do Pib Percapita 2
        pibpercapita2 = pib2 / populacao2;
          // calculo do inverso de densidade 2
    inversoDensidade2 = 1/ densidadepopulacional2;
    // calculo super poder 2
    superPoder2 = populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibpercapita2 + inversoDensidade2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
// Exibição dos Dados da primeira Carta:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f Hab/Km²\n", densidadepopulacional1);
    printf("Pib Percapita: %.2f Reais\n", pibpercapita1);
    printf("Super Poder 1: %.2f\n", superPoder1);


 // Exibição dos Dados da segunda Carta:
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2 );
    printf("PIB: %.2f Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f Hab/Km²\n", densidadepopulacional2);
    printf("Pib Percapita: %.2f Reais\n", pibpercapita2);
    printf("Super Poder 2: %.2f\n", superPoder2);
   
    // comparação das cartas
    

    resulpopulacao = populacao1 > populacao2;
    resularea = area1 > area2;
    resulpib = pib1 > pib2;
    resulpontosturisticos = pontosturisticos1 > pontosturisticos2;
    resuldensidade = inversoDensidade1 < inversoDensidade2;
    resulpibpercapita = pibpercapita1 > pibpercapita2;
    resulsuperPoder = superPoder1 > superPoder2;
    

    // Exibição da Comparação das cartas

   printf("\n*** Comparação das Cartas ***\n");

   printf("População: Carta %d venceu (%d)\n", resulpopulacao ? 1 : 2, resulpopulacao);
   printf("Área: Carta %d venceu (%d)\n", resularea ? 1 : 2, resularea);
   printf("PIB: Carta %d venceu (%d)\n", resulpib ? 1 : 2, resulpib);
   printf("Pontos Turísticos: Carta %d venceu (%d)\n", resulpontosturisticos ? 1 : 2, resulpontosturisticos);
   printf("Densidade Populacional: Carta %d venceu (%d)\n", resuldensidade ? 1 : 2, resuldensidade);
   printf("PIB per Capita: Carta %d venceu (%d)\n", resulpibpercapita ? 1 : 2, resulpibpercapita);
   printf("Super Poder: Carta %d venceu (%d)\n", resulsuperPoder ? 1 : 2, resulsuperPoder);


    return 0;
}
