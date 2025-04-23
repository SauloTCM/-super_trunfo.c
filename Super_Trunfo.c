#include <stdio.h>
#include <string.h>
#include <locale.h>
 
int main() {

    setlocale(LC_ALL,"Portuguese_Brazil");

    // Variáveis da carta 01
    char estado1;
    char codigo1[3];
    char cidade1[25];
    int populacao1;
    float area1;
    float pib1;
    int P_turisticos1;

    // Variáveis da carta 02
    char estado2;
    char codigo2[3];
    char cidade2[25];
    int populacao2;
    float area2;
    float pib2;
    int P_turisticos2;

    
  
    printf("\nDesafio do SUPER TRUNFO - Cadastro de Cartas\n");
    printf("\nSaulo de Tarso Medeiros\n");
    printf(" \n");


    // Solicitando informacoes da Carta 01
    printf("Cadastro da Carta 1:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    
    printf("Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Area (em Km2): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    
    printf("Numero de Pontos Turiticos: ");
    scanf("%d", &P_turisticos1);
    printf(" \n");

    // Solicitando informacoes da Carta 02
    printf("Cadastro da Carta 2:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    
    printf("Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Area (em Km2): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    
    printf("Numero de Pontos Turiticos: ");
    scanf("%d", &P_turisticos2);
    printf(" \n");

    // Mostrando informaces da Carta 01
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d de Pessoas\n", populacao1);
    printf("Area: %.2f Km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", P_turisticos1);

    // Mostrando informaces da Carta 02
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d de Pessoas\n", populacao2);
    printf("Area: %.2f Km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", P_turisticos2);

    


    return 0;
}
