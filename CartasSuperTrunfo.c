#include <stdio.h>
int main () {

    // Declaracao das Variaveis

    char Estado1[30], Estado2[30];
    char Codigo_da_carta1[04], Codigo_da_carta2[04];
    char Cidade1[30], Cidade2[30];
    unsigned long int Populacao1 , Populacao2;
    float Area1 , Area2;
    float Pib1 , Pib2;
    int Pontos_Turisticos1 , Pontos_Turisticos2;
    float densidade1 , densidade2;
    float percapita1 , percapita2;
    float superpoder1 , superpoder2 ;
    
    // Entrada dos Dados da Carta1

    printf ("Estado1:");
    scanf ("%s" ,&Estado1);

    printf ("Codigo da carta1:");
    scanf ("%s" ,&Codigo_da_carta1);

    printf ("Cidade1:");
    scanf ("%s" ,&Cidade1);

    printf ("Populacao1:");
    scanf ("%lu" ,&Populacao1);

    printf ("Area1:");
    scanf ("%d" ,&Area1);

    printf ("Pib1:");
    scanf ("%f" ,&Pib1);

    printf ("Pontos Turisticos1:");
    scanf ("%d" ,&Pontos_Turisticos1);

    //entrada de Dados da carta2
    printf ("\nInsira os dados para a carta2:\n");

    printf ("Estado2:");
    scanf ("%s" ,&Estado2);

    printf  ("Codigo da carta2:");
    scanf ("%s" , &Codigo_da_carta2);
    
    printf ("Cidade2:");
    scanf ("%s", &Cidade2);
    
    printf ("Populacao2:");
    scanf ("%lu", &Populacao2);
    
    printf ("Area2:");
    scanf ("%f", &Area2);
    
    printf ("Pib2:");
    scanf ("%f" ,&Pib2);
    
    printf ("Pontos Turisticos2:");
    scanf ("%d", &Pontos_Turisticos2);

    //inclusao do calculo da densidade populacional e renda percapita
    densidade1 = (float) Populacao1 / Area1;
    densidade2 = (float) Populacao2 / Area2;

    percapita1 = (float) Pib1 / Populacao1;
    percapita2 = (float) Pib2 / Populacao2;

    //Cálculo do Super poder
    superpoder1 = (float) (Populacao1 + Area1 + Pib1 + Pontos_Turisticos1 + (1/densidade1) + percapita1);
    superpoder2 = (float) (Populacao2 + Area2 + Pib2 + Pontos_Turisticos2 + (1/densidade2) + percapita2);


    //Exibicao das cartas para comparacao dos dados

    printf ("\nCarta1:\n");
    printf ("Estado: %s\n", Estado1);
    printf ("Codigo: %s\n", Codigo_da_carta1);
    printf ("Cidade: %s\n", Cidade1);
    printf ("Populacao: %d\n", Populacao1);
    printf ("Area: %.2f km²\n", Area1);
    printf ("PIB: %.2f de reais\n" , Pib1);
    printf ("Pontos Turisticos: %d\n", Pontos_Turisticos1);
    printf ("Densidade Populacional: %.2f Hab/km²\n" , densidade1);
    printf ("Renda Percapita: %.2f reais\n" , percapita1);
    printf ("Super poder: %.2f\n", superpoder1);


    printf ("\nCarta2:\n");
    printf ("Estado: %s\n", Estado2);
    printf ("Codigo: %s\n", Codigo_da_carta2);
    printf ("Cidade: %s\n", Cidade2);
    printf ("Populacao: %d\n", Populacao2);
    printf ("Area: %.2f km²\n", Area2);
    printf ("PIB: %2f de Reais\n" , Pib2);
    printf ("Pontos Turisticos: %d\n", Pontos_Turisticos2);
    printf ("Densidade Populaciona: %.2f Hab/ km²\n" , densidade2);
    printf ("Renda Percapita: %.2f reais\n" , percapita2);
    printf ("Super poder: %.2f\n", superpoder2);

    //comparacao da carta vencedora

    printf("\nComparação de Cartas, se = 1 a carta 1 venceu!, se = 0 a carta 2 venceu!\n");
    printf ("População: %d\n", Populacao1 > Populacao2);
    printf ("Area: %d\n", Area1 > Area2);
    printf ("PIB: %d\n" , Pib1 > Pib2);
    printf ("Pontos Turisticos: %d\n", Pontos_Turisticos1 > Pontos_Turisticos2);
    printf ("Densidade Populaciona: %d\n" , densidade1 < densidade2);
    printf ("Renda Percapita: %d\n" , percapita1 > percapita2);
    printf ("Super Poder: %d\n" , superpoder1 > superpoder2);



 return 0;
}