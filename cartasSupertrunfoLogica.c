#include <stdio.h>
#include <ctype.h>

int main() {
    // ===== Variáveis Carta 1 =====
    char Estado[15], Codigo[20], Cidade[20];
    unsigned long int Populacao;
    float Area, PIB;
    int Ponto;

    // ===== Variáveis Carta 2 =====
    char Estado2[20], Codigo2[10], Cidade2[20];
    unsigned long int Populacao2;
    float Area2, PIB2;
    int Ponto2;

    // ===== Variáveis calculadas =====
    float densidadePopulacao, densidadePopulacao2;
    float pibTotal, pibTotal2;
    float pibpercapita, pibpercapita2;
    float superPoder1, superPoder2;

    // ===== Entrada Carta 1 =====
    printf("Carta1!\n\n");
    printf("Digite o Estado: ");
    scanf("%14s", Estado);
    printf("Digite a Cidade: ");
    scanf(" %19[^\n]", Cidade);
    printf("Digite o Codigo: ");
    scanf("%19s", Codigo);
    printf("Digite a Populacao: ");
    scanf("%lu", &Populacao);
    printf("Digite a Área M²: ");
    scanf("%f", &Area);
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    printf("Digite Numero de Pontos turisticos: ");
    scanf("%d", &Ponto);

    // ===== Entrada Carta 2 =====
    printf("\nCarta2!\n\n");
    printf("Digite o Estado: ");
    scanf("%19s", Estado2);
    printf("Digite a Cidade: ");
    scanf(" %19[^\n]", Cidade2);
    printf("Digite o Codigo: ");
    scanf("%9s", Codigo2);
    printf("Digite a População: ");
    scanf("%lu", &Populacao2);
    printf("Digite a Área M²: ");
    scanf("%f", &Area2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite Numero de Pontos turisticos: ");
    scanf("%d", &Ponto2);

    // ===== Cálculos =====
    densidadePopulacao = (Area != 0) ? (float)Populacao / Area : 0.0f;
    densidadePopulacao2 = (Area2 != 0) ? (float)Populacao2 / Area2 : 0.0f;
    pibTotal = PIB * 1000000000.0f;
    pibTotal2 = PIB2 * 1000000000.0f;
    pibpercapita = (Populacao != 0) ? pibTotal / (float)Populacao : 0.0f;
    pibpercapita2 = (Populacao2 != 0) ? pibTotal2 / (float)Populacao2 : 0.0f;
    superPoder1 = (float)Populacao + Area + pibTotal + (float)Ponto + pibpercapita + densidadePopulacao;
    superPoder2 = (float)Populacao2 + Area2 + pibTotal2 + (float)Ponto2 + pibpercapita2 + densidadePopulacao2;

    // ===== Menu de escolha =====
    char escolha;
    do {
        printf("\n===== ESCOLHA O ATRIBUTO PARA COMPARACAO =====\n");
        printf("A. Populacao\n");
        printf("B. Area\n");
        printf("C. PIB\n");
        printf("D. Pontos Turisticos\n");
        printf("E. Densidade Populacional\n");
        printf("F. PIB per Capita\n");
        printf("G. Super Poder\n");
        printf("Opcao: ");
        scanf(" %c", &escolha);
        escolha = toupper(escolha);
        if (escolha < 'A' || escolha > 'G') {
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (escolha < 'A' || escolha > 'G');

    // ===== Comparação =====
    printf("\n===== RESULTADO DA COMPARACAO =====\n");
    switch (escolha) {
        case 'A': // População
            printf("Populacao - Carta 1: %lu | Carta 2: %lu\n", Populacao, Populacao2);
            if (Populacao > Populacao2) printf("Vencedora: Carta 1 (%s)\n", Cidade);
            else if (Populacao2 > Populacao) printf("Vencedora: Carta 2 (%s)\n", Cidade2);
            else printf("Empate!\n");
            break;
        case 'B': // Área
            printf("Area - Carta 1: %.2f | Carta 2: %.2f\n", Area, Area2);
            if (Area > Area2) printf("Vencedora: Carta 1 (%s)\n", Cidade);
            else if (Area2 > Area) printf("Vencedora: Carta 2 (%s)\n", Cidade2);
            else printf("Empate!\n");
            break;
        case 'C': // PIB
            printf("PIB - Carta 1: %.2f | Carta 2: %.2f\n", pibTotal, pibTotal2);
            if (pibTotal > pibTotal2) printf("Vencedora: Carta 1 (%s)\n", Cidade);
            else if (pibTotal2 > pibTotal) printf("Vencedora: Carta 2 (%s)\n", Cidade2);
            else printf("Empate!\n");
            break;
        case 'D': // Pontos turísticos
            printf("Pontos Turisticos - Carta 1: %d | Carta 2: %d\n", Ponto, Ponto2);
            if (Ponto > Ponto2) printf("Vencedora: Carta 1 (%s)\n", Cidade);
            else if (Ponto2 > Ponto) printf("Vencedora: Carta 2 (%s)\n", Cidade2);
            else printf("Empate!\n");
            break;
        case 'E': // Densidade populacional
            printf("Densidade Populacional - Carta 1: %.2f | Carta 2: %.2f\n", densidadePopulacao, densidadePopulacao2);
            if (densidadePopulacao > densidadePopulacao2) printf("Vencedora: Carta 1 (%s)\n", Cidade);
            else if (densidadePopulacao2 > densidadePopulacao) printf("Vencedora: Carta 2 (%s)\n", Cidade2);
            else printf("Empate!\n");
            break;
        case 'F': // PIB per capita
            printf("PIB per Capita - Carta 1: %.2f | Carta 2: %.2f\n", pibpercapita, pibpercapita2);
            if (pibpercapita > pibpercapita2) printf("Vencedora: Carta 1 (%s)\n", Cidade);
            else if (pibpercapita2 > pibpercapita) printf("Vencedora: Carta 2 (%s)\n", Cidade2);
            else printf("Empate!\n");
            break;
        case 'G': // Super Poder
            printf("Super Poder - Carta 1: %.2f | Carta 2: %.2f\n", superPoder1, superPoder2);
            if (superPoder1 > superPoder2) printf("Vencedora: Carta 1 (%s)\n", Cidade);
            else if (superPoder2 > superPoder1) printf("Vencedora: Carta 2 (%s)\n", Cidade2);
            else printf("Empate!\n");
            break;
    }

    return 0;
}
