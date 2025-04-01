#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    int populacao2, populacao1, pontoturistico2, pontoturistico1;
    float area2, area1, pib2, pib1;
    char nome2[50], nome1[50];
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    printf("\nInsira o nome da cidade:\n");
    fgets(nome1, sizeof(nome1), stdin);

    printf("Insira a População:\n");
    scanf("%i", &populacao1);

    printf("Insira o Numero de Pontos Turisticos:\n");
    scanf("%i", &pontoturistico1);

    printf("Insira a area do pais:\n");
    scanf("%f", &area1);

    printf("Insira o PIB do pais:\n");
    scanf("%f", &pib1);

    getchar();
    printf("Vamos registrar agora a segunda carta\n");
    
    printf("Insira o nome da cidade:\n");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Insira a população:\n");
    scanf("%i", &populacao2);

    printf("Insira o Numero de Pontos Turisticos:\n");
    scanf("%i", &pontoturistico2);

    printf("Insira a area do pais:\n");
    scanf("%f", &area2);

    printf("Insira o PIB do pais:\n");
    scanf("%f", &pib2);
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
