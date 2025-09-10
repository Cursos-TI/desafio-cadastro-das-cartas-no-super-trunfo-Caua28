#include <stdio.h>

int main() {
    
    char estado [20], estado2[20];
    char codigo[50], codigo2[50];
    char cidade[20], cidade2[20];
    unsigned long int populacao, populacao2;
    double area, area2;
    double pib, pib2;
    int pontos_turisticos, pontos_turisticos2;

    printf("Olá, bem-vindo ao cadastro de cartas do jogo Super Trunfo. Vamos começar?\n\n");

    printf("CADASTRO DA CARTA 1:\n");

    printf("ESTADO:");
    scanf("%s", estado);

    printf("CÓDIGO:");
    scanf("%s", codigo);

    printf("CIDADE:");
    scanf(" %19[^\n]", cidade);

    printf("POPULAÇÃO:");
    scanf("%lu", &populacao);

    printf("ÁREA:");
    scanf("%lf", &area);

    printf("PIB:");
    scanf("%lf", &pib);

    printf("PONTOS TURISTICOS:");
    scanf("%d", &pontos_turisticos);

    float pib_per_capita1 = (double) pib / populacao;
    float densidade1 = (double) populacao / area;
    float super_poder = populacao + pib + area + pontos_turisticos + 1 / densidade1 + pib_per_capita1;

    printf("\n""CADASTRO DA CARTA 2:\n");

    printf("ESTADO:");
    scanf("%s", estado2);

    printf("CÓDIGO:");
    scanf("%s", codigo2);

    printf("CIDADE:");
    scanf(" %19[^\n]", cidade2);

    printf("POPULAÇÃO:");
    scanf("%lu", &populacao2);

    printf("ÁREA:");
    scanf("%lf", &area2);

    printf("PIB:");
    scanf("%lf", &pib2);

    printf("PONTOS TURISTICOS:");
    scanf("%d", &pontos_turisticos2);

    float pib_per_capita2 = (double) pib2 / populacao2;
    float densidade2 = (double) populacao2 / area2;
    float super_poder2 = populacao2 + pib2 + area2 + pontos_turisticos2 + 1 / densidade2 + pib_per_capita2;


    printf("\n\n""CARTA 1:\n");

    printf("ESTADO: %s\n", estado);
    printf("CÓDIGO: %s\n", codigo);
    printf("CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %lu\n", populacao);
    printf("ÁREA: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("PONTOS TURISTICOS: %d\n", pontos_turisticos);
    printf("PIB PER CAPITA: %.2f\n", pib_per_capita1);
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidade1);


    printf("\n""CARTA 2:\n");

    printf("ESTADO: %s\n", estado2);
    printf("CÓDIGO: %s\n", codigo2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %lu\n", populacao2);
    printf("ÁREA: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PONTOS TURISTICOS: %d\n", pontos_turisticos2);
    printf("PIB PER CAPITA: %.2f\n", pib_per_capita2);
    printf("DENSIDADE POPULACIONAL: %.2f\n\n", densidade2);

    printf("COMPARAÇÃO DAS CARTAS:\n");
    printf("POPULAÇÃO: A CARTA 1 VENCEU %d\n", populacao > populacao2);
    printf("ÁREA: A CARTA 1 VENCEU %d\n", area > area2);
    printf("PIB: A CARTA 1 VENCEU %d\n", pib > pib2);
    printf("PONTOS TURÍSTICOS: A CARTA 1 VENCEU %d\n", pontos_turisticos > pontos_turisticos2);
    printf("PIB PER CAPITA: A CARTA 1 VENCEU %d\n", pib_per_capita1 > pib_per_capita2);
    printf("DENSIDADE POPULACIONAL: A CARTA 2 VENCEU %d\n", 1 / densidade1 > 1 / densidade2);
    printf("SUPER PODER: A CARTA 1 VENCEU %d", super_poder > super_poder2);
    
    return 0;
}