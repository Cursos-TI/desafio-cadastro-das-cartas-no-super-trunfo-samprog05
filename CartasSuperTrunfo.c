#include <stdio.h>

int main(){
    printf("Carta 1\n");
    char estado1;
    char codigo1[50];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontoturistico1;
    float densidade1;
    float pibcapita1;

    printf("Estado da carta 1:\n");
    scanf("%c", &estado1);
    printf("O Estado é: %c\n", estado1);

    printf("Código da carta 1:\n");
    scanf("%s", &codigo1);
    printf("O Código é: %s\n", codigo1);
    
    printf("Nome da Cidade da carta 1:\n");
    scanf("%s", &nomedacidade1);
    printf("Nome da Cidade é: %s\n", nomedacidade1);
     
    printf("População da carta 1:\n");
    scanf("%d", &populacao1);
    printf("População é: %d\n", populacao1);

    printf("A Área da carta 1 é:\n");
    scanf("%f", &area1);
    printf("A Área é: %f km²\n", area1);

    printf("PIB da carta 1:\n");
    scanf("%f", &pib1);
    printf("O PIB é: %f bilhões de reais\n", pib1);

    printf("Número de Pontos Turísticos da carta 1:\n");
    scanf("%d", &pontoturistico1);
    printf("Número de Pontos Turísticos são: %d\n", pontoturistico1);

    densidade1 = ( populacao1 / area1);

    printf("Densidade Populacional é: %f\n", densidade1);

    pibcapita1 = (pib1 / populacao1);

    printf("O PIB per Capita é: %f\n", pibcapita1);








    printf("\nCarta 2\n");
    char estado2;
    char codigo2[50];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibcapita2;

    printf("Estado da carta 2:\n");
    scanf("%c", &estado2);
    printf("O Estado é: %c\n", estado2);

    printf("O Código da carta 2:\n");
    scanf("%s", &codigo2);
    printf("O Código é: %s\n", codigo2);

    printf("Nome da cidade da carta 2:\n");
    scanf("%s", &nomedacidade2);
    printf("O Nome da Cidade é: %s\n", nomedacidade2);

    printf("População da carta 2 é:\n");
    scanf("%d", &populacao2);
    printf("A População é: %d\n", populacao2);

    printf("A Área da carta 2 é:\n");
    scanf("%f", &area2);
    printf("A Área é: %f km²\n", area2);

    printf("O PIB da carta 2 é:\n");
    scanf("%f", &pib2);
    printf("O PIB é: %f bilhões de reais\n", pib2);

    printf("O Número de Pontos Turísticos da carta 2:\n");
    scanf("%d", &pontosturisticos2);
    printf("O Número de Pontos Turísticos são: %d", pontosturisticos2);

    densidade2 = (populacao2 / area2);

    printf("A Densidade Populacional é: %f\n", densidade2);

    pibcapita2 = (pib2 / populacao2);

    printf("Pib per Capita é: %f", pibcapita2);







   return 0;


}







