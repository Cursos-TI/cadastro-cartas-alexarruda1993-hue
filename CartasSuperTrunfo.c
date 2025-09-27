#include <stdio.h>

//definindo uma estrutura para armazenar os dados de uma carta

int main (){
    //Declaração de variaveis para carta 1
    char estado1;                // Letra de 'A' a 'H'
    char codigo1[4];             // Codigo da carta (exA01)
    char nomecidade1[50];        // Nome da cidade
    int populacao1;              // Numero de habitantes
    float area1;                 // Area da cidade em Km²
    float pib1;                  // Pib em bilhões
    int pontosturisticos1;       // Quantidade de Pontos Turisticos

    //Declaração de variaveis para carta 2
    char estado2;                // Letra de 'A' a 'H'
    char codigo2[4];             // Codigo da carta (exA01)
    char nomecidade2[50];        // Nome da cidade
    int populacao2;              // Numero de habitantes
    float area2;                 // Area da cidade em Km²
    float pib2;                  // Pib em bilhões
    int pontosturisticos2;       // Quantidade de Pontos Turisticos

    //instruções para o usuario
    // CADASTRO DA CARTA 1
    printf("Cadastro da Carta 1: \n");

    printf("Digite o estado (letra A a H): ");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade1);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib1);

    printf("Quantidade de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

     // CADASTRO DA CARTA 2
    printf("Cadastro da Carta 2: \n");
    
    printf("Digite o estado (letra A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade2);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib2);

    printf("Quantidade de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    
    //EXIBIÇÃO DE CARTAS CADASTRADAS
    printf("\n");
    printf("CARTAS CADASTRADAS \n\n");

    //EXIBIÇÃO DA CARTA 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Número de Habitantes: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos1);


    //EXIBIÇÃO DA CARTA 2
    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Número de Habitantes: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos2);

    printf("\n");
    printf("Cadastro de Cartas Concluido com sucesso!\n");
    
    return 0;

};
