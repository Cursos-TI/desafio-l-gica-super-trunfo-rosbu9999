#include <stdio.h>

int main() {
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[30];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    double pib3, pib4;
    float densidade1, densidade2;
    float superpoder1, superpoder2;
    

    printf("carta 01\n");

    printf("digite o nome do estado: ");
    scanf("%s", &estado1);
    printf("digite o codigo da carta: ");
    scanf("%s", &codigo1);
    printf("digite o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("digite o numero de habitantes: ");
    scanf("%u", &populacao1);
    printf("digite a área da cidade: ");
    scanf("%f", &area1);
    printf("digite o pib da cidade: ");
    scanf("%f", &pib1);
    printf("digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    
    pib3 = (float)pib1 / populacao1;
    densidade1 = (float)populacao1 / area1;
    superpoder1 = populacao1 + area1 + pib1 + pib2 + densidade2;

    printf("carta: 01\n");
    printf("estado: %s\n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %u \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("Pib: %.2f \n", pib1);
    printf("Pontos Turisticos: %d \n", pontosturisticos1);
    printf("PIB per capita: %.2f reais\n", pib3);
    printf("Densidade populacional: %f hab/km²\n", densidade1);
    printf("Super Poder: %.2f", superpoder1);

    printf("carta 02\n");

    printf("digite o nome do estado: ");
    scanf("%s", &estado2);
    printf("digite o codigo da carta: ");
    scanf("%s", &codigo2);
    printf("digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("digite o numero de habitantes: ");
    scanf("%u", &populacao2);
    printf("digite a área da cidade: ");
    scanf("%f", &area2);
    printf("digite o pib da cidade: ");
    scanf("%f", &pib2);
    printf("digite a quantidade de pontos turisticos: \n ");
    scanf("%d", &pontosturisticos2);
    
    pib4 = (float)pib2 / populacao2;
    densidade2 = (float)populacao2 / area2;
    superpoder2 = populacao2 + area2 + + pib2 + densidade2;

    printf("carta 02\n");

    printf("estado: %s\n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %u \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("Pib: %.2f \n", pib2);
    printf("Pontos Turisticos: %d \n", pontosturisticos2);
    printf("PIB per capita: %.2f reais\n", pib4);
    printf("Densidade populacional: %f hab/km²\n", densidade2);

    printf("comparando as cartas\n");

    if (populacao1 > populacao2)
    {
        printf("carta 1 ganhou");
    }
    else
    {
        printf("carta 2 ganhou");
    }
    if (area1 > area2)
    {
        printf("carta 1 ganhou");
    }
    else
    {
        printf("carta 2 ganhou");
    }
    if (pib1 > pib2)
    {
        printf("carta 1 ganhou");
    }
    else{
        printf("carta 2 ganhou");
    }
if (pontosturisticos1 > pontosturisticos2)
{
    printf("carta 1 ganhou");

}
else
{
    printf("carta 2 ganhou");
}
if (pib3 > pib4)
{
    printf("carta 1 ganhou");
}
else
{
printf("carta 2 ganhou");
}
if (densidade1 < densidade2)
{
    printf("carta 1 ganhou");
}
else
{
    printf("carta 2 ganhou");
}
    return 0;
}
