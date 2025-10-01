#include <stdio.h>

//definindo uma estrutura para armazenar os dasos de uma carta

int main (){
    //Declaração de variaveis para carta 1
    char estado1;                // Letra de 'A' a 'H'
    char codigo1[4];             // Codigo da carta (exA01)
    char nomecidade1[50];        // Nome da cidade
    unsigned long int populacao1;// Numero de habitantes
    float area1;                 // Area da cidade em Km²
    float pib1;                  // Pib em bilhões
    int pontosturisticos1;       // Quantidade de Pontos Turisticos
    float densidade1;            // Densidade Populacional
    float pibpercapita1;         // Pib Percapita
    float superpoder1;           //Soma de população, área, pib, pib per capita e densidade populacional invertida para comparação e número de pontos turísticos

    //Declaração de variaveis para carta 2
    char estado2;                // Letra de 'A' a 'H'
    char codigo2[4];             // Codigo da carta (exA01)
    char nomecidade2[50];        // Nome da cidade
    unsigned long int populacao2;// Numero de habitantes
    float area2;                 // Area da cidade em Km²
    float pib2;                  // Pib em bilhões
    int pontosturisticos2;       // Quantidade de Pontos Turisticos
    float densidade2;            // Densidade Populacional
    float pibpercapita2;         // Pib Percapita
    float superpoder2;            //Soma de população, área, pib, pib per capita e densidade populacional invertida para comparação e número de pontos turísticos


    //instruções para o usuario
    // CADASTRO DA CARTA 1
    printf("Cadastro da Carta 1: \n");

    printf("Digite o estado (letra A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite o numero de habitantes: ");
    scanf(" %lu", &populacao1);

    printf("Digite a área em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB em bilhões: ");
    scanf(" %f", &pib1);

    printf("Quantidade de Pontos Turisticos: ");
    scanf(" %d", &pontosturisticos1);

    densidade1 = (float)populacao1 / area1;                     //Calcula a Densidade Populacional
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;    // Calcula o PIB per Capita (* 1000000000 Converte bilhões para reais)
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibpercapita1 + (1.0 / densidade1);
    
    printf("\n");

     // CADASTRO DA CARTA 2
    printf("Cadastro da Carta 2: \n");

    printf("Digite o estado (letra A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite o numero de habitantes: ");
    scanf(" %lu", &populacao2);

    printf("Digite a área em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB em bilhões: ");
    scanf(" %f", &pib2);

    printf("Quantidade de Pontos Turisticos: ");
    scanf(" %d", &pontosturisticos2);

    densidade2 = (float)populacao2 / area2;                    // Calcula a Densidade Populacional
    pibpercapita2 = (pib2 * 1000000000)  / (float)populacao2;  // Calcula o PIB per Capita, (* 1000000000 Converte bilhões para reais)
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibpercapita2 + (1.0 / densidade2);
    
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
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    
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
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    printf("\n");
    printf("Cadastro de Cartas Concluido com sucesso!\n");

    //Nova comparação de cartas
    printf("\n");
    printf("Comparação de Cartas:\n");


    //População: maior vence (retorna 1 se carta 1 vence, 0 se carta 2 vence)
    printf("População: carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);

    //Área: maior vence
    printf("Área: carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 :0);

    //PIB: maior vence
    printf("PIB: carta %d venceu (%d)\n", (pib1 > pib2) ? 1: 2, (pib1 > pib2) ? 1 : 0);

    //Pontos Turísticos: maior vence
    printf("Pontos Turísticos: %d venceu (%d)\n", (pontosturisticos1 > pontosturisticos2) ? 1 : 2, (pontosturisticos1 > pontosturisticos2) ? 1 : 0);

    //Densidade Populacional: menor vence
    printf("Densidade PopulacionaL: %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2) ? 1 : 0);

    //PIB per capita: maior vence
    printf("PIB per capita: %d venceu (%d)\n", (pibpercapita1 > pibpercapita2) ? 1 : 2, (pibpercapita1 > pibpercapita2) ? 1 : 0);

    //Super poder: maior vence
    printf("Super poder: %d venceu (%d)\n", (superpoder1 > superpoder2) ? 1 : 2, (superpoder1 > superpoder2) ? 1 : 0);
    
    return 0;

};
