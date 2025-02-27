#include <stdio.h>

int main() {
    // Variáveis utilizadas na carta 1!
    int populacao1, npt1; // NPT = Número de Pontos Turísticos.
    char estado1, cidade1[50], codigo1[50];
    float area1, pib1;

    // Número da carta.
    printf("Carta 1:\n");
    // Solicitação dos dados cadastrais.

    // Uma letra de 'A' a 'H' (representando um dos oito estados).
    printf("Digite a letra do seu estado: "); 
    scanf(" %c", &estado1);
    // O número do código do estado de 01 a 04.
    printf("Digite o código do seu estado: ");
    scanf("%s", &codigo1);
    // O nome da cidade. 
    printf("Digite o nome da sua cidade: ");
    scanf("%s", &cidade1);
    // O número de habitantes da cidade. 
    printf("Digite a quantidade da população do seu estado: ");
    scanf("%d", &populacao1);
    // A área da cidade em quilômetros quadrados. 
    printf("Digite a área do seu estado: ");
    scanf("%f", &area1);
    // O Produto Interno Bruto da cidade.
    printf("Digite o valor do PIB do seu estado: ");
    scanf("%f", &pib1);
    // A quantidade de pontos turísticos na cidade. 
    printf("Digite a quantidade de Pontos Turísticos do seu estado: ");
    scanf("%d", &npt1);

    // Espaço em branco.
    printf("\n");

    // Variáveis utilizadas na carta 2!
    int populacao2, npt2; // NPT = Número de Pontos Turísticos.
    char estado2, cidade2[50], codigo2[50];
    float area2, pib2;

    // Número da carta.
    printf("Carta 2:\n");
    // Solicitação dos dados cadastrais.

    // Uma letra de 'A' a 'H' (representando um dos oito estados).
    printf("Digite a letra do seu estado: "); 
    scanf(" %c", &estado2);
    // O número do código do estado de 01 a 04.
    printf("Digite o código do seu estado: ");
    scanf("%s", &codigo2);
    // O nome da cidade. 
    printf("Digite o nome da sua cidade: ");
    scanf("%s", &cidade2);
    // O número de habitantes da cidade. 
    printf("Digite a quantidade da população do seu estado: ");
    scanf("%d", &populacao2);
    // A área da cidade em quilômetros quadrados. 
    printf("Digite a área do seu estado: ");
    scanf("%f", &area2);
    // O Produto Interno Bruto da cidade.
    printf("Digite o valor do PIB do seu estado: ");
    scanf("%f", &pib2);
    // A quantidade de pontos turísticos na cidade. 
    printf("Digite a quantidade de Pontos Turísticos do seu estado: ");
    scanf("%d", &npt2);

    // Espaço em branco.
    printf("\n");

    // Dados cadastrado na carta 1.
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codígo: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", npt1);

    // Espaço em branco.
    printf("\n");

    // Dados cadastrado na carta 2.
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codígo: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);
}
