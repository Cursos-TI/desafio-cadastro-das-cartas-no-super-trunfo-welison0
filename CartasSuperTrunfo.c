#include <stdio.h>

int main() {
    //variavel carta 1             //variaveis 1 adicionadas
    char Estado[15] ;
    char Codigo[20];
    char Cidade[20];
    unsigned long int Populacao;
    float Area, PIB;
    int Ponto;

     //obs:adicioneis asvariaveis float antes de receber o resultado, sempre dava erro e nao sabia o porque.

    //variavel carta2                 //variavel carta 2 adicionada
    char Estado2[20];
    char Codigo2[10];
    char Cidade2[20];
    unsigned long int Populacao2;
    float Area2, PIB2;
    int Ponto2;

   //nivel mestre, variaveis adicionadas                  //novas variaveis adicionadas
   float densidadePopulacao, densidadePopulacao2;
   float pibTotal, pibTotal2;
   float pibpercapita, pibpercapita2;
   float superPoder1, superPoder2;
    
    
    //primeiro questionario/Carta1
    printf("Carta1! \n\n");


    printf("Digite o Estado: ");
    scanf("%9s", Estado);

    printf("Digite a Cidade: ");
    scanf("%9s", Cidade);

    printf("Digite o Codigo: ");
    scanf( "%4s", Codigo);

    printf("Digite a Populacao: ");
    scanf("%lu", &Populacao);

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
    scanf("%9s", Estado2);

    printf("Digite a Cidade: ");
    scanf("%9s", Cidade2);

    printf("Digite o Codigo: ");
    scanf("%4s", Codigo2);

    printf("Digite a População: ");
    scanf("%lu", &Populacao2);

    printf("Digite a Área M²: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite Numero de Pontos turisticos: ");
    scanf("%d", &Ponto2);


    //Calculo                                                                   //variaveis calculos adicionads
    densidadePopulacao = (Area != 0) ? (float)Populacao / Area : 0.0f;
    densidadePopulacao2 = (Area2 != 0) ? (float) Populacao2 / Area2 : 0.0f;

    pibTotal = PIB * 1000000000.0f;
    pibTotal2 = PIB2 * 1000000000.0f;

    pibpercapita = (Populacao != 0) ? pibTotal / (float)Populacao : 0.0f;
    pibpercapita2 = (Populacao2 != 0) ? pibTotal2 / (float)Populacao2 : 0.0f;

    superPoder1 = (float)Populacao + Area + pibTotal + (float)Ponto + pibpercapita + densidadePopulacao;
    superPoder2 = (float)Populacao2 +Area2 + pibTotal2 + (float)Ponto2 +pibpercapita2 + densidadePopulacao2;
    


     //comparação 
  printf("\n--- Comparação ---\n");                                                //comparação de resultados
  printf("Populacao: carta 1 venceu (%.lu)\n", Populacao > Populacao2);
  printf("area: carta 1 venceu(%d)\n", Area > Area2);
  printf("pib: carta 1 venceu (%d)\n", pibTotal > pibTotal2);
  printf("pontos turisticos: carta 1 venceu (%d)\n", Ponto > Ponto2);
  printf("densidade populacional: carta 1 venceu (%d)\n", densidadePopulacao > densidadePopulacao2);
  printf("pib per capita: carta 1 venceu (%d)\n", pibpercapita > pibpercapita2);
  printf("super poder: carta 1 venceu (%d)\n", superPoder1 > superPoder2);


    printf("\n--- CIDADE 1---\n");

    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Codigo: %s\n", Codigo);
    printf("Populacao: %lu\n", Populacao);
    printf("Area (m²): %.2f\n", Area);
    printf("PIB: %.2f\n", pibTotal);
    printf("Pontos Turisticos: %d\n", Ponto);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao); //variaveis float adicionadas para impressão dos resultados.
    printf("PIB Per Capita: %.2f reais\n", pibpercapita);

     printf("\n--- Cidade2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Código: %s\n", Codigo2);
    printf("População: %lu\n", Populacao2);
    
    printf("Área (m²): %.2f\n", Area2);
    printf("PIB: %f\n", pibTotal);
    printf("Pontos Turísticos: %d\n", Ponto2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao2);
    printf("PIB Per Capita: %.2f reais\n", pibpercapita2);
 
      //impressão de calculos                                                         //novas impressoes de calculos adicionadas
   printf("\n--- Resultados ---\n");
   printf("carta 1 - desnsidade populacional: %.2f hab/km²\n", densidadePopulacao);
   printf("carta 1 - pib: R$ %f\n", pibTotal);
   printf("carta1 - super poder: %.2f\n", superPoder1);

   printf("\ncarta 2 - desnsidade populacional: %.2f\n", densidadePopulacao2);
   printf("carta 2 - pib: R$ %f\n", pibTotal2);
   printf("carta 2 - super poder: %2.f\n", superPoder2);

//comparação (if_else)                                                                    //variaveis: if_else adicionadas
    printf("\n--- Comparação (população) ---\n");
    printf("carta 1 - %s (%s): %d População\n", Cidade, Estado, densidadePopulacao);
    printf("carta 2 - %s (%s): %d População\n", Cidade2, Estado2, densidadePopulacao2); 

    if(Populacao > Populacao2){
      printf("\nresultado: carta 1 (%s) venceu!\n", Cidade);
   }else{
    printf("\nresultado: carta 2 (%s) venceu!\n", Cidade2);
   }

   

    
    return 0;


    





}
