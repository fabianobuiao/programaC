#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2[10];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- LEITURA DA CARTA 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Estado: ");
    scanf(" %c", &estado1); 
    
    printf("Código da Carta (Ex: A01): ");
    scanf(" %s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Lê o nome da cidade incluindo espaços
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    
    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // --- LEITURA DA CARTA 2 ---
    printf("=== Cadastro da Carta 2 ===\n");
    
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Código da Carta (Ex: B03): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // --- EXIBIÇÃO DOS DADOS ---
    printf("=================================\n");
    printf("        CARTAS CADASTRADAS       \n");
    printf("=================================\n\n");

    // Exibição Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos1);


    // Exibição Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}