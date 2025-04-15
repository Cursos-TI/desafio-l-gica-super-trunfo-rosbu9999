#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

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
    int opcao;
    int escolha;

    printf("Escolha uma opção:\n");
    printf("1. iniciar jogo\n");
    printf("2. regras\n");
    printf("3. sair\n");
    scanf("%d", &opcao);
  
switch (opcao){
   case 1:{
      printf("escolha a comparação das cartas\n");
      printf("1.população\n");
      printf("2.área\n");
      printf("3.pib\n");
      printf("4.pontos turisticos\n");
      printf("5.densidade populacional\n");
      printf("6.superpoder\n");
      break;
        switch (escolha){ 
        case 1:
        printf(" ganha quem tiver a população maior\n");

        printf("carta 01\n");

        printf("digite o nome do estado: ");
        scanf("%s", &estado1);
        printf("digite o codigo da carta: ");
        scanf("%s", &codigo1);
        printf("digite o nome da cidade: ");
        scanf("%s", &cidade1);
        printf("digite o numero de habitantes: ");
        scanf("%u", &populacao1);

       printf("carta: 01\n");
       printf("estado: %s\n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Cidade: %s \n", cidade1);
       printf("População: %u \n", populacao1);

       printf("digite o nome do estado: ");
       scanf("%s", &estado2);
       printf("digite o codigo da carta: ");
       scanf("%s", &codigo2);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade2);
       printf("digite o numero de habitantes: ");
       scanf("%u", &populacao2);

       printf("carta: 02\n");
       printf("estado: %s\n", estado2);
       printf("Codigo: %s \n", codigo2);
       printf("Cidade: %s \n", cidade2);
       printf("População: %u \n", populacao2);

       if (populacao1 > populacao2)
       {
        printf("carta 1 ganhou");
       } else if (populacao1 < populacao2){
        printf("carta 2 ganhou");
       }
       else
       {
        printf("empate");}
       break;
       case 2:
       printf("ganha quem tiver a área maior");

       printf("carta: 01\n");
       printf("estado: %s\n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Cidade: %s \n", cidade1);
       printf("área: %.2f \n", area1);

       printf("carta: 02\n");
       printf("estado: %s\n", estado2);
       printf("Codigo: %s \n", codigo2);
       printf("Cidade: %s \n", cidade2);
       printf("área: %.2f \n", area2);

       if (area1 > area2)
       {
        printf("carta 1 ganhou");
       } else if (area1 < area2){
        printf("carta 2 ganhou");}
       else
       {
        printf("empate");
       break;
       case 3:
       printf("ganha quem tiver o pib maior");

       printf("carta 01\n");

       printf("digite o nome do estado: ");
       scanf("%s", &estado1);
       printf("digite o codigo da carta: ");
       scanf("%s", &codigo1);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade1);
       printf("digite o pib da cidade: ");
       scanf("%f", &pib1);

       printf("carta: 01\n");
       printf("estado: %s\n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Cidade: %s \n", cidade1);
       printf("Pib: %.2f \n", pib1);
    

       printf("carta 02\n");

       printf("digite o nome do estado: ");
       scanf("%s", &estado2);
        printf("digite o codigo da carta: ");
       scanf("%s", &codigo2);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade2);
       printf("digite o pib da cidade: ");
       scanf("%f", &pib2);

       printf("carta: 02\n");
       printf("estado: %s\n", estado2);
       printf("Codigo: %s \n", codigo2);
        printf("Cidade: %s \n", cidade2);
       printf("Pib: %.2f \n", pib2);
       }if (pib1 > pib2)
       {
        printf("carta 1 ganhou");
       }else if (pib1 < pib2){
        printf("carta 2 ganhou");
       } else{
        printf("empate");
       }
      
       break;
       case 4:
       printf("ganha quem tiver mais pontos turisticos");

       printf("carta 01\n");

       printf("digite o nome do estado: ");
       scanf("%s", &estado1);
       printf("digite o codigo da carta: ");
       scanf("%s", &codigo1);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade1);
       printf("digite o numero de pontos turisticos: ");
       scanf("%d", &pontosturisticos1);

        printf("carta: 01\n");
       printf("estado: %s\n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Cidade: %s \n", cidade1);
       printf("Pontos Turisticos: %d \n", pontosturisticos1);

       printf("carta 01\n");

       printf("digite o nome do estado: ");
       scanf("%s", &estado2);
       printf("digite o codigo da carta: ");
       scanf("%s", &codigo2);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade2);
       printf("digite o numero de pontos turisticos: ");
       scanf("%d", &pontosturisticos2);

       printf("carta: 02\n");
       printf("estado: %s\n", estado2);
       printf("Codigo: %s \n", codigo2);
       printf("Cidade: %s \n", cidade2);
       printf("Pontos Turisticos: %d \n", pontosturisticos2);
       break;
       case 5:
       printf("ganha quem tiver menos densidade populacional");

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

       densidade1 = (float)populacao1 / area1;

       printf("carta: 01\n");
       printf("estado: %s\n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Cidade: %s \n", cidade1);
       printf("População: %u \n", populacao1);
       printf("Área: %.2f \n", area1);
       printf("Densidade populacional: %f hab/km²\n", densidade1);

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

       densidade2 = (float)populacao2 / area2;      

       printf("carta: 01\n");
       printf("estado: %s\n", estado2);
       printf("Codigo: %s \n", codigo2);
       printf("Cidade: %s \n", cidade2);
       printf("População: %u \n", populacao2);
       printf("Área: %.2f \n", area2);
       printf("Densidade populacional: %f hab/km²\n", densidade2);

       if (densidade1 < densidade2)
       {
        printf("carta 2 ganhou");
       } else if (densidade1 == densidade2){
        printf("empate");}
       else
       {
        printf("carta 1 ganhou");

       break;
       case 6:
       printf("vence quem tiver mais pib percapita");

       printf("carta 01\n");

       printf("digite o nome do estado: ");
       scanf("%s", &estado1);
        printf("digite o codigo da carta: ");
       scanf("%s", &codigo1);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade1);
       printf("digite o numero de habitantes: ");
       scanf("%u", &populacao1);
       printf("digite o pib da cidade: ");
       scanf("%f", &pib1);

       pib3 = (float)pib1 / populacao1;

       printf("carta: 01\n");
       printf("estado: %s\n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Cidade: %s \n", cidade1);
       printf("População: %u \n", populacao1);;
       printf("Pib: %.2f \n", pib1);
       printf("PIB per capita: %.2f reais\n", pib3);

       printf("carta 02\n");
       printf("digite o nome do estado: ");
       scanf("%s", &estado2);
       printf("digite o codigo da carta: ");
       scanf("%s", &codigo2);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade2);
       printf("digite o numero de habitantes: ");
       scanf("%u", &populacao2);
       printf("digite o pib da cidade: ");
        scanf("%f", &pib2);

       pib4 = (float)pib2 / populacao2;

       printf("carta: 02\n");
       printf("estado: %s\n", estado2);
       printf("Codigo: %s \n", codigo2);
        printf("Cidade: %s \n", cidade2);
       printf("População: %u \n", populacao2);;
       printf("Pib: %.2f \n", pib2);
       printf("PIB per capita: %.2f reais\n", pib4);


       if (pib3 > pib4)
       {
       printf("carta 1 ganhou");
       }else if (pib3 < pib4 ){
       printf("carta 2 ganhou");
       }else
       {
       printf("empate");
       }

       case 7:
       printf("ganha quem tiver mais poder");
  


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

       if (superpoder1 > superpoder2)
       { 
       printf("carta 1 ganhou");
       }
       else if (superpoder1 < superpoder2)
       {
       printf("carta 2 ganhou");
       }
       else
       {
       printf("empate");
       }
       break;
        default: printf("invalido"); }
        break;}
      
         
         
    case 2:
   printf("Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.");
   break;
   case 3:
   printf("saindo...");
   break;
   default: 
   printf("invalido");
   break;}

  return 0;
  

}
}
