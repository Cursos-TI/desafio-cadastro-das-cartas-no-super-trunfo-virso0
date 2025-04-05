#include <stdio.h>

int main() {
    // primeiro a definição das variaveis, criando o duplo para armazenar para as duas cartas
    int pontoturistico2, pontoturistico1;
    unsigned int populacao2, populacao1;
    float area2, area1, pib2, pib1, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;
    char nome2[50], nome1[50], nomeestado1[50], nomeestado2[50], codigo1[50], codigo2[50];
//as perguntas com printf e em seguida a leitura com scanf pegando o tratamento da reposta e vinculando a variavel correta, processo repetido com todas as variaveis
    
    printf("\nInsira o nome do estado:\n");
    fgets(nomeestado1, sizeof(nomeestado1), stdin);

    printf("Insira o codigo da carta:\n");
    fgets(codigo1, sizeof(codigo1), stdin);

    printf("Insira o nome da cidade:\n");
    fgets(nome1, sizeof(nome1), stdin);

    printf("Insira a População:\n");
    scanf("%i", &populacao1);

    printf("Insira o Numero de Pontos Turisticos:\n");
    scanf("%i", &pontoturistico1);

    printf("Insira a área em km:\n");
    scanf("%f", &area1);

    printf("Insira o PIB:\n");
    scanf("%f", &pib1);

    getchar();
    printf("Vamos regristrar agora a segunda carta\n");
    
    printf("\nInsira o nome do estado:\n");
    fgets(nomeestado2, sizeof(nomeestado2), stdin);

    printf("Insira o codigo da carta:\n");
    fgets(codigo2, sizeof(codigo2), stdin);


    printf("Insira o nome da cidade:\n");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Insira a população:\n");
    scanf("%i", &populacao2);

    printf("Insira o Numero de Pontos Turisticos:\n");
    scanf("%i", &pontoturistico2);

    printf("Insira a área em km:\n");
    scanf("%f", &area2);

    printf("Insira o PIB:\n");
    scanf("%f", &pib2);

    densidadepopulacional1 = (float)populacao1 / area1;
    densidadepopulacional2 = (float)populacao2 / area2;
    
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    printf("Primeira carta registrada com sucesso\n");
    printf("Estado: %s\n", nomeestado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade:%s\n", nome1);
    printf("População: %i\n", populacao1);
    printf("Área: %2.f km²\n", area1);
    printf("PIB: %2.f\n", pib1);
    printf("Numero de Pontos Turisticos: %i\n", pontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capital:%.3f\n", pibpercapita1);

    superpoder1 = populacao1 + area1 + pib1 + pontoturistico1 + pibpercapita1 + (1/densidadepopulacional1);
    printf("Superpoder: %.2f\n", superpoder1);

    printf("\nSegunda carta registrada com sucesso\n");
    printf("Estado: %s\n", nomeestado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade:%s\n", nome2);
    printf("População: %i\n", populacao2);
    printf("Área: %2.f km²\n", area2);
    printf("PIB: %2.f\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capital:%.3f\n", pibpercapita2);

    superpoder2 = populacao2 + area2 + pib2 + pontoturistico2 + pibpercapita2 + (1/densidadepopulacional2);
    printf("Superpoder: %.2f\n", superpoder2);

    printf("\nComparação de Cartas:\n");
    printf("População:%d\n", populacao1>populacao2);
    printf("Área:%d\n", area1>area2);
    printf("PIB:%d\n", pib1>pib2);
    printf("Pontos Turisticos:%d\n", pontoturistico1>pontoturistico2);
    printf("Densidade Populacional:%d\n", densidadepopulacional1<densidadepopulacional2);
    printf("PIB per Capita:%d\n", pibpercapita1>pibpercapita2);
    printf("Superpoder:%d\n", superpoder1>superpoder2);

    return 0;
}