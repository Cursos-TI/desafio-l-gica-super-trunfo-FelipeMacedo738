#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

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

    // Declaração de variáveis para a primeira carta
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a segunda carta
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira cidade (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira cidade (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %49s", nomeCidade1);
    printf("Digite a população da primeira cidade: ");
    scanf(" %lu", &populacao1);
    printf("Digite a área da primeira cidade (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da primeira cidade (em bilhões): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("\nDigite o estado da segunda cidade (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda cidade (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %49s", nomeCidade2);
    printf("Digite a população da segunda cidade: ");
    scanf(" %lu", &populacao2);
    printf("Digite a área da segunda cidade (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da segunda cidade (em bilhões): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf(" %d", &pontosTuristicos2);

    // Comparação baseada no PIB
    printf("\nComparação de cartas (Atributo: PIB):\n");
    printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
    printf("%s: %.2f bilhões\n", nomeCidade2, pib2);
    
    if (pib1 > pib2) {
        printf("Resultado: %s venceu!\n", nomeCidade1);
    } else if (pib1 < pib2) {
        printf("Resultado: %s venceu!\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }


    return 0;
}
