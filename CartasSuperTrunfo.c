#include <stdio.h>

int main () {

    //Declaracao das Variaveis
    char estado1[30] = "Amazonas", estado2[30] = "Bahia";
    char codigo_da_carta1[4] = "A01", codigo_da_carta2[4] = "B01";
    char cidade1[30] = "Manaus", cidade2[30]= "Juazeiro";
    unsigned long int populacao1 = 2064000 , populacao2 = 237821;
    float atributo1, atributo2;
    float area1 = 11401 , area2 = 6721;
    float pib1 = 103281000000 , pib2 = 5181529250;
    int pontos_turisticos1= 14 , pontos_turisticos2= 15;
    float densidade1, densidade2;
    float percapita1 , percapita2;
    float superpoder1, superpoder2;
    int opcao, opcao2;
    int resultado1, resultado2;

   
    //inclusao do calculo da densidade populacional e renda percapita
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    percapita1 = (float) pib1 / populacao1;
    percapita2 = (float) pib2 / populacao2;

    //Calculo do Super Poder
    superpoder1 = (float) (populacao1 + area1 + pib1 + pontos_turisticos1 + (1/densidade1) + percapita1);
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontos_turisticos2 + (1/densidade2) + percapita2);


    //Exibicao das cartas para comparacao dos dados
    printf ("\nCarta1:\n");
    printf ("Estado: %s\n", estado1);
    printf ("Codigo: %s\n", codigo_da_carta1);
    printf ("Cidade: %s\n", cidade1);
    printf ("Populacao: %lu\n", populacao1);
    printf ("Area: %.2f km²\n", area1);
    printf ("PIB: %.2f de reais\n" , pib1);
    printf ("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf ("Densidade Populacional: %.2f Hab/km²\n" , densidade1);
    printf ("Renda Percapita: %.2f reais\n" , percapita1);
    printf ("Super poder: %.2f\n", superpoder1);


    printf ("\nCarta2:\n");
    printf ("Estado: %s\n", estado2);
    printf ("Codigo: %s\n", codigo_da_carta2);
    printf ("Cidade: %s\n", cidade2);
    printf ("Populacao: %lu\n", populacao2);
    printf ("Area: %.2f km²\n", area2);
    printf ("PIB: %2f de Reais\n" , pib2);
    printf ("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf ("Densidade Populaciona: %.2f Hab/ km²\n" , densidade2);
    printf ("Renda Percapita: %.2f reais\n" , percapita2);
    printf ("Super poder: %.2f\n", superpoder2);

    //Escolha e comparação do primeiro Atributo.
    
    printf("\nEscolha o Primeiro atributo para comparação:\n");
    printf("1 - Populacao \n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Renda Percapita\n");
    printf("7 - Super poder\n");
    printf("Digite a sua opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
        printf ("\nVocê escolheu o Atributo: População\n");
        printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
       
        break;
        case 2:
        printf ("\n Você escolheu o Atributo: Área\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, area2);
        resultado1 = area1 > area2 ? 1 : 0;
        break;

        case 3:
        printf ("\nVocê escolheu o Atributo: PIB\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);
        resultado1 = pib1 >pib2 ? 1:0;
        break;

        case 4:
        printf ("\nVocê escolheu o Atributo: Pontos Turisticos\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontos_turisticos1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontos_turisticos2);
        resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1:0 ;
        break;

        case 5:
        printf ("\nVoê escolheu o Atributo: Densidade Populacional\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidade2);
        resultado1 = densidade1 < densidade2 ? 1:0 ;
        break;

        case 6:
        printf ("\nVocê escolheu o Atributo: Renda Percapita\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, percapita1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, percapita2);
        resultado1 = percapita1 > percapita2 ? 1:0 ;
        break;

        case 7:
        printf ("\nVocê escolheu o Atributo: Super Poder\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, superpoder1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, superpoder2);
        resultado1 = superpoder1 > superpoder2 ? 1:0 ;
        break;

        default:
        printf("## Opção Invalida, escolha uma opçao entre 1 e 7 ##.");
    }

    //Escolha e comparação do segundo Atributo.
    printf("\nEscolha o Segundo atributo para comparação:\n");
    printf("1 - Populacao \n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Renda Percapita\n");
    printf("7 - Super poder\n");
    printf("Digite a sua opção: ");
    scanf("%d", &opcao2);

    //vericação da escolha de atributos válidos.
    if (opcao == opcao2) {
        printf("### Escolha um atributo diferente do primeiro! ###");
    } else {

    switch(opcao2) {
        case 1:
        printf ("\nVocê escolheu o Atributo: População\n");
        printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
        printf ("\n Você escolheu o Atributo: Área\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, area2);
        resultado2 = area1 > area2 ? 1 : 0;
        break;

        case 3:
        printf ("\nVocê escolheu o Atributo: PIB\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);
        resultado2 = pib1 >pib2 ? 1:0;
        break;

        case 4:
        printf ("\nVocê escolheu o Atributo: Pontos Turisticos\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontos_turisticos1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontos_turisticos2);
        resultado2 = pontos_turisticos1 >pontos_turisticos2 ? 1:0;
        break;

        case 5:
        printf ("\nVoê escolheu o Atributo: Densidade Populacional\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidade2);
        resultado2 = densidade1 < densidade2 ? 1:0 ;
        break;

        case 6:
        printf ("\nVocê escolheu o Atributo: Renda Percapita\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, percapita1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, percapita2);
        resultado2 = percapita1 > percapita2 ? 1:0 ;
        break;

        case 7:
        printf ("\nVocê escolheu o Atributo: Super Poder\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, superpoder1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, superpoder2);
        resultado2 = superpoder1 > superpoder2 ? 1:0 ;
        break;

        default:
        printf("## Opção Invalida, escolha uma opçao entre 1 e 7 ##.");
    }

    // Exibição dos Resultados.
    if (resultado1 && resultado2) {
        printf("\nA carta 1 venceu as duas comparações");
    } else if (resultado1 != resultado2) {
        printf ("\nO Resulatado foi Empate");
    } else {
        printf("\nA carta 2 Venceu as duas comparações!");
    }

    }


 return 0;
}