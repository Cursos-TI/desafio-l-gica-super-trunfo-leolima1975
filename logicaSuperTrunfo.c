#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //variaveis
    char estado1[3], estado2[3];  
    char cidade1[30], cidade2[30];
    char carta1[4], carta2[4];
    unsigned int populacao1, populacao2;
    int pturisticos1, pturisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidadepop1, densidadepop2;
    float pibcapita1, pibcapita2;
    float superpoder1, superpoder2;

    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // (Repita para cada propriedade)
    // Cadastro das Cartas:
    // Entrada dos dados carta1
    printf("Entre com a sigla do estado: \n");
    scanf(" %2s", estado1);  // Limitando entrada para evitar buffer overflow

    printf("Entre com o codigo da carta: \n");
    scanf(" %2s", carta1);

    printf("Entre com o nome da cidade: \n");
    scanf(" %s[^\n]", cidade1); // Permite espaços no nome da cidade

    printf("Entre com a populacao da carta: \n");
    scanf(" %u", &populacao1);

    printf("Entre com a area da carta: \n");
    scanf(" %f", &area1);

    printf("Entre com o PIB: \n");
    scanf(" %f", &pib1);

    printf("Quantidade de pontos turisticos: \n");
    scanf(" %d", &pturisticos1);


    //entrada dos dados carta2
    printf("Entre com a sigla do estado: \n");
    scanf(" %2s", &estado2);

    printf("Entre com o codigo da carta; \n");
    scanf(" %2s", &carta2);

    printf("Entre com o nome da cidade: \n");
    scanf(" %s[^\n]", &cidade2);

    printf("Entre com a população da carta: \n");
    scanf(" %u", &populacao2);

    printf("Entre com a area da carta: \n");
    scanf(" %f", &area2);

    printf("Entre com o PIB: \n");
    scanf(" %f", &pib2);

    printf("Qunatidade de pontos turisticos: \n");
    scanf(" %d", &pturisticos2);

    //calculando densidade populacional das cartas
    densidadepop1 = (float) populacao1 / area1;
    densidadepop2 = (float) populacao2 / area2;

    //calculando pib per capita das cartas
    pibcapita1 = (float) pib1 / populacao1;
    pibcapita2 = (float) pib2 / populacao2;

    //calculando o super poder das cartas
    superpoder1 = (float) populacao1 + pturisticos1 + area1 + pib1 + densidadepop1 + pibcapita1;
    superpoder2 = (float) populacao2 + pturisticos2 + area2 + pib2 + densidadepop2 + pibcapita2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    // // Exibição dos dados carta1
    printf("---- Super Trunfo ----\n\n");
    printf("** Carta 1 **\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %u\n", populacao1);
    printf("Área em Km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Quantidade de pontos turisticos: %d\n", pturisticos1);
    printf("Densidade populacional: %f\n", densidadepop1);
    printf("PIB per capita: %f\n", pibcapita1);
    printf("Super Poder: %f\n", superpoder1);

    //Exibição dos dados carta2
    printf("---- Super Trunfo ----\n\n");
    printf("** Carta 2 **\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área em Km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade de pontos turisticos: %d\n", pturisticos2);
    printf("Densidade populacional: %f\n", densidadepop2);
    printf("PIB per capita: %f\n", pibcapita2);
    printf("Super Poder: %f\n\n", superpoder2);

    printf("----Resultado do  desafio----\n");
    printf("Pontos turisticos da carta 1: %d\n", pturisticos1);
    printf("Pontos turisticos da carta 2: %d\n", pturisticos2);

    if (pturisticos1 > pturisticos2){
        printf(" %s venceu!\n", cidade1);
    } else {
        printf(" %s venceu!\n", cidade2);
    }

    return 0;
}
