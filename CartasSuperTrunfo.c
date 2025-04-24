#include <stdio.h>
int main() {
    printf("Desafio Super Trunfo - Paises\n");
    
    char nome[20];
    int populacao;
    float area;
    float PIB;
    char pontos_turisticos[20];
    char cidade[20];

    printf("Digite o nome do estado:\n");
    scanf("%s", nome);

    printf("digite o nome da cidade:\n");
    scanf("%s", cidade);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    getchar();

    printf("Digite a area em km²:\n");
    scanf("%f", &area);

    getchar();
    
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    
    getchar();

    printf("Digite os pontos turisticos:\n");
    scanf("%s", pontos_turisticos);

    printf("\n Dados da CARTA A01 ---\n");
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %2.f\n", area);
    printf("PIB: %2.f\n", PIB);
    printf("Pontos Turisticos: %s\n", pontos_turisticos);


    printf("Cadastre a Proxima Carta\n");
    

    printf("Digite o nome do estado:\n");
    scanf("%s", nome);

    printf("digite o nome da cidade:\n");
    scanf("%s", cidade);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    getchar();

    printf("Digite a area em km²:\n");
    scanf("%f", &area);

    getchar();
    
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    
    getchar();

    printf("Digite os pontos turisticos:\n");
    scanf("%s", pontos_turisticos);

    printf("\n Dados da CARTA B02 ---\n");
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %2.f\n", area);
    printf("PIB: %2.f\n", PIB);
    printf("Pontos Turisticos: %s\n", pontos_turisticos);


    return 0;

}