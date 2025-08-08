#include <stdio.h>

int main() {
    //variavel carta 1
    char Estado[10] ;
    char Codigo[5];
    char Cidade[20];
    int Populacao;
    float Area, PIB;
    int Ponto;

     //obs:adicioneis asvariaveis float antes de receber o resultado, sempre dava erro e nao sabia o porque.

    //variavel carta2
    char Estado2[10];
    char Codigo2[5];
    char Cidade2[20];
    int Populacao2;
    float Area2, PIB2;
    int Ponto2;
    
    
    //primeiro questionario/Carta1
    printf("Carta1! \n\n");

    printf("Digite o Estado: ");
    scanf("%s", Estado);

    printf("Digite a Cidade: ");
    scanf("%s", Cidade);

    printf("Digite o Codigo: ");
    scanf( "%s", &Codigo);

    printf("Digite a Populacao: ");
    scanf("%d", &Populacao);

    printf("Digite a Área M²: ");
    scanf("%f", &Area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite Numero de Pontos turisticos: ");
    scanf("%d", &Ponto);

    

    printf("\n");

    //segundo questionario/carta2
    printf("Carta2! \n\n");
    printf("Digite o Estado: ");
    scanf("%s", Estado2);

    printf("Digite a Cidade: ");
    scanf("%s", Cidade2);

    printf("Digite o Codigo: ");
    scanf("%s", Codigo2);

    printf("Digite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área M²: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite Numero de Pontos turisticos: ");
    scanf("%d", &Ponto2);

    //Calculo carta 1
    float densidadePopulacional = (float) Populacao / Area; //variaveis float adicionada depois de receber os resultados.
    float pibPerCapita = (float) PIB / Populacao;

    //Calculo carta 2
    float densidadePopulacional2 = (float) Populacao2 / Area2;
    float PibPerCapita2 = (float) PIB2 / Populacao2;



    printf("\n--- CIDADE 1---\n");

    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Codigo: %s\n", Codigo);
    printf("Populacao: %d\n", Populacao);
    printf("Area (m²): %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", Ponto);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional); //variaveis float adicionadas para impressão dos resultados.
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita);

     printf("\n--- Cidade2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Código: %s\n", Codigo2);
    printf("População: %d\n", Populacao2);
    printf("Área (m²): %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", Ponto2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB Per Capita: %.2f reais\n", PibPerCapita2);
    
    return 0;


    





}
