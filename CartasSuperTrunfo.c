#include <stdio.h>

int main() {
    
    char Estado[10] ;
    char Codigo[5];
    char Cidade[20];
    int Populacao;
    float Area, PIB;
    int Ponto;

    printf("Carta1! \n\n");

printf("Digite o Estado: ");
    scanf("%s", Estado);

    printf("Digite a Cidade: ");
    scanf("%s", &Cidade);

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

   
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Codigo: %s\n", Codigo);
    printf("Populacao: %d\n", Populacao);
    printf("Area (m²): %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", Ponto);
    
    return 0;


    





}
