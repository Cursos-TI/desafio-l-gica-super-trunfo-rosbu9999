#include <stdio.h>
#include <stdlib.h>
int main(){

    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[30];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float pib3, pib4;
    float densidade1, densidade2;
    float superpoder1, superpoder2;
    int opcao;
    int escolha;
    double resultado1, Resultado1, resultado2, Resultado2, resultado3, Resultado3, resultado4, Resultado4,
    resultado5, Resultado5, resultado6, Resultado6, resultado7, Resultado7; 

    printf("Escolha uma opção:\n");
    printf("1. iniciar jogo\n");
    printf("2. regras\n");
    printf("3. sair\n");
    scanf("%d", &opcao);
  
switch (opcao){
   case 1:
      printf("escolha os dois atributos para a comparação das cartas\n");
      printf("1.população e área \n");
      printf("2.área e pib\n");
      printf("3.pib e pontos turisticos\n");
      printf("4.pontos turisticos e população\n");
      printf("5.densidade populacional e pib\n");
      printf("6.superpoder e pib\n");
      printf("7.superpoder e pib percapita\n");
      scanf("%d", &escolha);
        switch (escolha){ 
        case 1:
        printf(" ganha quem tiver a população e área amaior\n");

        printf("carta 01\n");

        printf("digite o nome do estado: ");
        scanf("%s", &estado1);
        printf("digite o codigo da carta: ");
        scanf("%s", &codigo1);
        printf("digite o nome da cidade: ");
        scanf("%s", &cidade1);
        printf("digite o numero de habitantes: ");
        scanf("%u", &populacao1);
        printf("digite quanto mede a área: ");
        scanf("%f", &area1);

       printf("carta: 01\n");
       printf("estado: %s\n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Cidade: %s \n", cidade1);
       printf("População: %u \n", populacao1);
       printf("área: %.2f \n ", area1);

       printf("carta 2\n");
       printf("digite o nome do estado: ");
       scanf("%s", &estado2);
       printf("digite o codigo da carta: ");
       scanf("%s", &codigo2);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade2);
       printf("digite o numero de habitantes: ");
       scanf("%u", &populacao2);
       printf("digite quanto mede a área: ");
        scanf("%f", &area2);

       printf("carta: 02\n");
       printf("estado: %s\n", estado2);
       printf("Codigo: %s \n", codigo2);
       printf("Cidade: %s \n", cidade2);
       printf("População: %u \n", populacao2);
       printf("área: %.2f\n",area2);

       resultado1 = populacao1 + area1;
       Resultado1 = populacao2 + area2;

       resultado1 > Resultado1 ? 1 : 0;


       if (resultado1 > Resultado1)
       {
        printf("carta 1 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado1, Resultado1);
       } else if (resultado1 < Resultado1){
        printf("carta 2 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado1, Resultado1);
       }
       else
       {
        printf("empate");}
       break;
       case 2:
       printf("ganha quem tiver a área maior\n");
       printf("carta 01\n");

       printf("digite o nome do estado: ");
       scanf("%s", &estado1);
       printf("digite o codigo da carta: ");
       scanf("%s", &codigo1);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade1);
       printf("digite quanto mede a área: ");
       scanf("%f", &area1);
       printf("digite o pib da cidade: ");
       scanf("%f", &pib1);

       printf("carta: 01\n");
       printf("estado: %s\n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Cidade: %s \n", cidade1);
       printf("área: %.2f \n", area1);
       printf("pib: %.2f \n", pib1);

       printf("carta 02\n");

        printf("digite o nome do estado: ");
        scanf("%s", &estado2);
        printf("digite o codigo da carta: ");
        scanf("%s", &codigo2);
        printf("digite o nome da cidade: ");
        scanf("%s", &cidade2);
        printf("digite quanto mede a área: ");
        scanf("%f", &area2);
        printf("digite o pib da cidade: ");
        scanf("%f", &pib2);

       printf("carta: 02\n");
       printf("estado: %s\n", estado2);
       printf("Codigo: %s \n", codigo2);
       printf("Cidade: %s \n", cidade2);
       printf("área: %.2f \n", area2);
       printf("pib: %.2f\n ", pib2);

       resultado2 = area1 + pib1;
       Resultado2 = area2 + pib2;

       resultado2 > Resultado2 ? 1 : 0;


       if (resultado2 > Resultado2)
       {
        printf("carta 1 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado2, Resultado2);
       } else if (resultado2 < Resultado2){
        printf("carta 2 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado2, Resultado2);
       }
       else
       {
        printf("empate");}
        break;

       case 3:
       printf("ganha quem tiver o pib e pontos turisticos maior");

       printf("carta 01\n");

       printf("digite o nome do estado: ");
       scanf("%s", &estado1);
       printf("digite o codigo da carta: ");
       scanf("%s", &codigo1);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade1);
       printf("digite o pib da cidade: ");
       scanf("%f", &pib1);
       printf("digite o numero de pontos turisticos: ");
       scanf("%d", &pontosturisticos1);

       printf("carta: 01\n");
       printf("estado: %s\n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Cidade: %s \n", cidade1);
       printf("Pib: %.2f \n", pib1);
       printf("Pontos Turisticos: %d \n", pontosturisticos1);
    

       printf("carta 02\n");

       printf("digite o nome do estado: ");
       scanf("%s", &estado2);
        printf("digite o codigo da carta: ");
       scanf("%s", &codigo2);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade2);
       printf("digite o pib da cidade: ");
       scanf("%f", &pib2);
       printf("digite o numero de pontos turisticos: ");
       scanf("%d", &pontosturisticos2);

       printf("carta: 02\n");
       printf("estado: %s\n", estado2);
       printf("Codigo: %s \n", codigo2);
        printf("Cidade: %s \n", cidade2);
       printf("Pib: %.2f \n", pib2);
       printf("Pontos Turisticos: %d \n", pontosturisticos2);
       
       resultado3 = pib1 + pontosturisticos1;
       Resultado3 = pib2 + pontosturisticos2;

       resultado3 > Resultado3 ? 1 : 0;


       if (resultado3 > Resultado3)
       {
        printf("carta 1 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado3, Resultado3);
       } else if (resultado2 < Resultado2){
        printf("carta 2 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado3, Resultado3);
       }
       else
       {
        printf("empate");}
       

       break;
       case 4:
       printf("ganha quem tiver mais pontos turisticos e população\n\n");

       printf("carta 01\n\n");

       printf("digite o nome do estado: ");
       scanf("%s", &estado1);
       printf("digite o codigo da carta: ");
       scanf("%s", &codigo1);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade1);
       printf("digite o numero de habitantes: ");
       scanf("%u", &populacao1);
       printf("digite o numero de pontos turisticos: ");
       scanf("%d", &pontosturisticos1);

        printf("carta: 01\n\n");
       printf("estado: %s\n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Cidade: %s \n", cidade1);
       printf("população: %u\n", populacao1);
       printf("Pontos Turisticos: %d \n", pontosturisticos1);

       printf("carta 02\n");

       printf("digite o nome do estado: ");
       scanf("%s", &estado2);
       printf("digite o codigo da carta: ");
       scanf("%s", &codigo2);
       printf("digite o nome da cidade: ");
       scanf("%s", &cidade2);
       printf("digite o numero de habitantes: ");
       scanf("%u", &populacao2);
       printf("digite o numero de pontos turisticos: ");
       scanf("%d", &pontosturisticos2);

       printf("carta: 02\n\n");
       printf("estado: %s\n", estado2);
       printf("Codigo: %s \n", codigo2);
       printf("Cidade: %s \n", cidade2);
       printf("população: %u\n", populacao2);
       printf("Pontos Turisticos: %d \n", pontosturisticos2);

       resultado4 = populacao1 + pontosturisticos1;
       Resultado4 = populacao2 + pontosturisticos2;

       resultado4 > Resultado4 ? 1 : 0;


       if (resultado4 > Resultado4)
       {
        printf("carta 1 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado4, Resultado4);
       } else if (resultado2 < Resultado2){
        printf("carta 2 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado4, Resultado4);
       }
       else
       {
        printf("empate");}
       break;
       case 5:
       printf("ganha quem tiver menos densidade populacional e pib");

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
       printf("digite o pib da cidade: ");
       scanf("%f", &pib2);
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

       resultado5 = densidade1 + pib1;
       Resultado5 = densidade2 + pib2;

       resultado5 < Resultado5 ? 1 : 0;


       if (resultado5 < Resultado5)
       {
        printf("carta 1 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado5, Resultado5);
       } else if (resultado5 > Resultado5){
        printf("carta 2 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado5, Resultado5);
       }
       else
       {
        printf("empate");}

        break;
       case 6:
       printf("vence quem tiver mais pib e poder ganha\n");

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
       superpoder1 = populacao1 + area1 + pib1 + pib2 - densidade2;

       printf("carta: 01\n");
       printf("estado: %s\n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Cidade: %s \n", cidade1);
       printf("População: %u \n", populacao1);
       printf("Área: %f km²\n", area1);
       printf("Pib: %.2f \n", pib1);
       printf("Pontos Turisticos: %d \n", pontosturisticos1);
       printf("PIB per capita: %.2f reais\n", pib3);
       printf("Densidade populacional: %f hab/km²\n", densidade1);
       printf("Super Poder: %.2f\n", superpoder1);

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
       printf("digite a quantidade de pontos turisticos: ");
       scanf("%d", &pontosturisticos2);

        pib4 = (float)pib2 / populacao2;
       densidade2 = (float)populacao2 / area2;
       superpoder2 = populacao2 + area2 +  pib2 - densidade2;

       printf("estado: %s\n", estado2);
       printf("Codigo: %s \n", codigo2);
       printf("Cidade: %s \n", cidade2);
       printf("População: %u \n", populacao2);
       printf("Área: 2f km² \n", area2);
       printf("Pib: %.2f \n", pib2);
       printf("Pontos Turisticos: %d \n", pontosturisticos2);
       printf("PIB per capita: %.2f reais\n", pib4);
       printf("Densidade populacional: %f hab/km²\n", densidade2);
       printf("superpoder: %.2f\n", superpoder2);

       
       resultado6 = superpoder1 + pib1;
       Resultado6 = superpoder2 + pib2;

       resultado6 > Resultado6 ? 1 : 0;


       if (resultado6 > Resultado6)
       {
        printf("carta 1 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado6, Resultado6);
       } else if (resultado6 < Resultado6){
        printf("carta 2 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado6, Resultado6);
       }
       else
       {
        printf("empate");}
        break;

      
       case 7:
       printf("ganha quem tiver mais poder e pib percapita");
  


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
       superpoder1 = populacao1 + area1 + pib1 + pib2 - densidade2;

       printf("carta: 01\n");
       printf("estado: %s\n", estado1);
       printf("Codigo: %s \n", codigo1);
       printf("Cidade: %s \n", cidade1);
       printf("População: %u \n", populacao1);
       printf("Área: %f km²\n", area1);
       printf("Pib: %.2f \n", pib1);
       printf("Pontos Turisticos: %d \n", pontosturisticos1);
       printf("PIB per capita: %.2f reais\n", pib3);
       printf("Densidade populacional: %f hab/km²\n", densidade1);
       printf("Super Poder: %.2f\n", superpoder1);

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
       superpoder2 = populacao2 + area2 +  pib2 - densidade2;

       printf("carta 02\n");

       printf("estado: %s\n", estado2);
       printf("Codigo: %s \n", codigo2);
       printf("Cidade: %s \n", cidade2);
       printf("População: %u \n", populacao2);
       printf("Área: 2f km² \n", area2);
       printf("Pib: %.2f \n", pib2);
       printf("Pontos Turisticos: %d \n", pontosturisticos2);
       printf("PIB per capita: %.2f reais\n", pib4);
       printf("Densidade populacional: %f hab/km²\n", densidade2);
       printf("superpoder: %.2f", superpoder2);

       printf("comparando as cartas\n");

       resultado7 = superpoder1 + pib3;
       Resultado7 = superpoder2 + pib4;

       resultado7 > Resultado7 ? 1 : 0;


       if (resultado7 > Resultado7)
       {
        printf("carta 1 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado7, Resultado7);
       } else if (resultado7 < Resultado7){
        printf("carta 2 ganhou\n carta 1 (%.2f)\n carta 2 (%.2f)", resultado7, Resultado7);
       }
       else
       {
        printf("empate");}

        break;}

        break;        
    case 2:
   printf("Regras de Comparação: A regra geral é: vence a carta com o maior valor nos atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.");
   break;
   case 3:
   printf("saindo...");
   break;
   default: 
   printf("invalido");
   break;}
  return 0;
