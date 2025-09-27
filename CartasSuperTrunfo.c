#include <stdio.h>
#include <stdlib.h>

int main () {

    int populacao1 = 212000000, populacao2 = 45700000;
    float area1 = 8510000, area2 = 2780000;
    float pib1 = 2179000000000, pib2 = 633300000000;
    int pontos_turisticos1 = 82, pontos_turisticos2 = 43;
    float densidade1 = (double) populacao1 / area1;
    float densidade2 = (double) populacao2 / area2;
    int escolha_jogador1;

    printf("BEM-VINDO A COMPARAÇÃO DE ATRIBUTOS!!\n");
    printf("ESCOLHA O ATRIBUTO PARA COMPARAÇÃO: \n");
    printf("1 - POPULAÇÃO\n");
    printf("2 - ÁREA\n");
    printf("3 - PIB\n");
    printf("4 - PONTOS TURÍSTICOS\n");
    printf("5 - DENSIDADE DEMOGRÁFICA\n");
    printf("ESCOLHA: ");
    scanf("%d", &escolha_jogador1);

    switch (escolha_jogador1)
    {
    case 1:
    printf("VOCÊ ESCOLHEU POPULAÇÃO\n");
    printf("POPULAÇÃO DO BRASIL: %d\n", populacao1);
    printf("POPULAÇÃO DA ARGENTINA: %d\n", populacao2);

    if (populacao1 == populacao2) {
    printf("HOUVE UM EMPATE!!\n");
    }
    else if (populacao1 > populacao2){
    printf("BRASIL VENCEU!!\n");
    }
    else {
    printf("ARGENTINA VENCEU!!\n");
    }
    break;

    case 2:
    printf("VOCÊ ESCOLHEU ÁREA\n");
    printf("ÁREA DO BRASIL: %.2f\n", area1);
    printf("ÁREA DA ARGENTINA: %.2f\n", area2);
    
    if (area1 == area2){
    printf("HOUVE UM EMPATE!!\n");
    }
    else if (area1 > area2){
    printf("BRASIL VENCEU!!\n");
    }
    else {
    printf("ARGENTINA VENCEU!!\n");
    }
    break;

    case 3:
    printf("VOCÊ ESCOLHEU PIB\n");
    printf("PIB DO BRASIL: %.2f\n", pib1);
    printf("PIB DA ARGENTINA: %.2f\n", pib2);

    if (pib1 == pib2){
    printf("HOUVE UM EMPATE!!\n");
    }
    else if (pib1 > pib2){
    printf("BRASIL VENCEU!!\n");
    }
    else {
    printf("ARGENTINA VENCEU!!\n");
    }
    break;
    
    case 4:
    printf("VOCÊ ESCOLHEU PONTOS TURÍSTICOS\n");
    printf("PONTOS TURÍSTICOS DO BRASIL: %d\n", pontos_turisticos1);
    printf("PONTOS TURÍSTICOS DA ARGENTINA: %d\n", pontos_turisticos2);

    if (pontos_turisticos1 == pontos_turisticos2){
    printf("HOUVE UM EMPATE!!\n");
    }
    else if (pontos_turisticos1 > pontos_turisticos2){
    printf("BRASIL VENCEU!!\n");
    }
    else {
    printf("ARGENTINA VENCEU!!\n");
    }
    
    case 5:
    printf("VOCÊ ESCOLHEU DENSIDADE DEMOGRÁFICA\n");
    printf("DENSIDADE DO BRASIL: %.2f\n", densidade1);
    printf("DENSIDADE DA ARGENTINA: %.2f\n", densidade2);

    if (densidade1 == densidade2){
    printf("HOUVE UM EMPATE!!\n");
    }
    else if (densidade1 < densidade2){
    printf("BRASIL VENCEU!!\n");
    }
    else {
    printf("ARGENTINA VENCEU!!\n");
    }
    break;
    
    default:
    printf("OPÇÃO INVÁLIDA!!");
    break;
}

 return 0;
}