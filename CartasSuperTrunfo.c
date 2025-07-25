#include <stdio.h>
//Olá!! Me chamo Cauã, e irei explicar cada passo do código que fiz para a realização do cadastro das cartas do jogo "Super Trunfo".

int main() {
    //Essas são as variáveis que utilizei no código.
    //Dividi em "variável" e "variável2" para evitar erros no código, ao ler as informações descritas.
    char estado[20], estado2[20];
    char código[50], código2[50];
    char cidade[20], cidade2[20];
    int população, população2;
    float área, área2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
   
    //Aqui, o jogador realiza os cadastros das duas cartas, fornecendo as informações solicitadas para o armazenamento via scanf.
   
    printf("Olá, bem-vindo ao cadastro de cartas do jogo Super Trunfo. Vamos começar?\n\n");

    printf("CADASTRO DA CARTA 1:\n");

    printf("ESTADO:");
    scanf("%s", &estado);

    printf("CÓDIGO:");
    scanf("%s", &código);

    printf("CIDADE:");
    scanf("%s", &cidade);

    printf("POPULAÇÃO:");
    scanf("%d",&população);

    printf("ÁREA:");
    scanf("%f", &área);

    printf("PIB:");
    scanf("%f", &pib);

    printf("PONTOS TURISTICOS:");
    scanf("%d", &pontos_turisticos);

    printf("\n""CADASTRO DA CARTA 2:\n");

    printf("ESTADO:");
    scanf("%s", &estado2);

    printf("CÓDIGO:");
    scanf("%s", &código2);

    printf("CIDADE:");
    scanf("%s", &cidade2);

    printf("POPULAÇÃO:");
    scanf("%d",&população2);

    printf("ÁREA:");
    scanf("%f", &área2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("PONTOS TURISTICOS:");
    scanf("%d", &pontos_turisticos2);

    //Por fim, os cadastros das cartas são exibidos com as informações fornecidas pelo jogador.

    printf("\n\n""CARTA 1:\n");

    printf("ESTADO: %s\n", estado);
    printf("CÓDIGO: %s\n", código);
    printf("CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %d\n", população);
    printf("ÁREA: %1.f\n", área);
    printf("PIB: %1.f\n", pib);
    printf("PONTOS TURISTICOS: %d\n", pontos_turisticos);

    printf("\n""CARTA 2:\n");

    printf("ESTADO: %s\n", estado2);
    printf("CÓDIGO: %s\n", código2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %d\n", população2);
    printf("ÁREA: %1.f\n", área2);
    printf("PIB: %1.f\n", pib2);
    printf("PONTOS TURISTICOS: %d\n", pontos_turisticos2);
    return 0;
}
