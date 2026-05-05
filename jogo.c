#include <stdio.h>

int main(){
    
    // carta 1
    char estado1[20];
    char codigo1[4]; // a01 = 3 chars +\0
    char nomecidade1[50];
    int população1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // carta 2
    char estado2[20];
    char codigo2[4]; // a01 = 3 chars +\0
    char nomecidade2[50];
    int população2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // cadastro da carta 1
    printf("=== cadastro da carta 1 ===\n");

    printf("digite estados [A-H]: ");
    scanf(" %[^\n]", estado1); // espaco entre do %c pra limpar buffer

    printf("digire o codigo da carta [ex: a01]:");
    scanf("%s", codigo1);

     printf("digite nome da cidade:");
     scanf(" %[^\n]", nomecidade1); // le ate o entre, pego nome com espaco 

     printf("digite a populacao:");
     scanf("%d", &população1);

     printf("digite a area[km²]:");
     scanf("%f", &area1);

     printf("digite o pib [bilhoes de reas]:");
     scanf("%f", &pib1);

     printf("digite os pontos turisticos: ");
     scanf("%d", &pontosturisticos1);
    

     densidade_populacional1 = (float) população1 / area1;
    pib_per_capita1 = pib1 / população1;

     // calcuçulo de carta 1
     

     printf("\n=== cadastro da carta 2 ===\n");

     printf("digite estado [A-H]:");
     scanf(" %[^\n]", estado2);

     printf("digite o codigo da carta[ex: a01]:");
     scanf("%s", codigo2);

     printf("digite nome da cidade:");
     scanf(" %[^\n]", nomecidade2);

     printf("digite a populacao:");
     scanf("%d", &população2);

     printf("digite a area[km2]:");
     scanf("%f", &area2);

     printf("digite o pib[bilhoes de reais]:");
     scanf("%f", &pib2);

     printf("digite os pontos turisticos:");
     scanf("%d", &pontosturisticos2);


    densidade_populacional2 = (float) população2 / area2;
    pib_per_capita2 = pib2 / população2;

     // saida de dados organizada
     printf("\n=== carta 1 ===\n");
     printf("Digite o Estado: %s\n", estado1);
     printf("codigo: %s\n",codigo1);
     printf("nome cidade: %s\n", nomecidade1);
     printf("Populacao: %d\n", população1);
     printf("Area: %.2fkm²\n", area1);
     printf("Pib: %.2f\n", pib1);
     printf("Pontos turisticos: %d\n",pontosturisticos1);
     printf("densidade populacional: %.2f\n", densidade_populacional1);
     printf("Pib per capita: %.2f\n", pib_per_capita1);

     printf("\n=== carta 2 ===\n");
     printf("digite estado: %s\n", estado2);
     printf("digite o codigo da carta: %s\n", codigo2);
     printf("digite nome da cidade: %s\n",nomecidade2);
     printf("digite a populacao: %d\n", população2);
     printf("digite a area[km²]: %.2f\n", area2);
     printf("digite o pib[bilhoes de reais]: %.2f\n", pib2);
     printf("digite os pontos turisticos: %d\n", pontosturisticos2);
     printf("densidade populacional: %.2f\n", densidade_populacional2);
     printf("Pib per capita: %.2f\n", pib_per_capita2);

     return 0;


}
