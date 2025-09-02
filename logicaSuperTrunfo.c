#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

char estado1[2]; 
char estado2[2];
char codigo_carta1[5];
char codigo_carta2[5];
char cidade1[20];
char cidade2[20];
int populacao1;
int populacao2;
float area1;
float area2;
float pib1;
float pib2;
int ponto_turistico1;
int ponto_turistico2;


int main() {

    printf("########################## Carta 1 ######################################\n");
    
    printf("Digite uma letra de 'A' a 'H' da carta 1: \n");
    scanf("%s", estado1);

    printf("Digite A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) da carta 1: \n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade 1: \n");
    scanf("%i", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados da cidade 1: \n");
    scanf("%f", &area1);
    
    printf("Digite o Produto Interno Bruto da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade 1: \n");
    scanf("%i", &ponto_turistico1);

    //-------------------------------------------------------------------------


    printf("########################## Carta 2 ######################################\n");
    
    printf("Digite uma letra de 'A' a 'H' da carta 2: \n");
    scanf("%s", estado2);

    printf("Digite A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) da carta 2: \n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade 2: \n");
    scanf("%i", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados da cidade 2: \n");
    scanf("%f", &area2);
    
    printf("Digite o Produto Interno Bruto da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade 2: \n");
    scanf("%i", &ponto_turistico2);

    printf("\n############################ Rsultado ############################\n");

    if (populacao1 > populacao2) {
        printf("Carta 1 - %s: %d habitantes.\n", cidade1, populacao1);
        printf("Carta 2 - %s: %d habitantes.\n", cidade2, populacao2);
        printf("Carta 1 (%s) venceu!.\n", cidade1);
        
    } else {
        printf("Carta 1 - %s: %d habitantes.\n", cidade1, populacao1);
        printf("Carta 2 - %s: %d habitantes.\n", cidade2, populacao2);
        printf("Carta 2 %s venceu!.\n", cidade2);
    }

    return 0;
}