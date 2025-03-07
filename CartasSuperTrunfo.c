#include <stdio.h>

int main(){

// Declaracao das Variaveis

char Estado1[30], Estado2[30];
char Codigo_da_carta1[4], Codigo_da_carta2[4];
char Cidade1[30], Cidade2[30];
int Populacao1 , Populacao2;
float Area1 , Area2;
float Pib1 , Pib2;
int Pontos_Turisticos1 , Pontos_Turisticos2;

// Entrada dos Dados da Carta1

printf ("Estado1:");
scanf ("%s", &Estado1);

printf ("Codigo da carta1:");
scanf ("%s", &Codigo_da_carta1);

printf ("Cidade1:");
scanf ("%s", &Cidade1);

printf ("Populacao1:");
scanf ("%d", &Populacao1);

printf ("Area1:");
scanf ("%d", &Area1);

printf ("Pib1:");
scanf ("%f", &Pib1);

printf ("Pontos Turisticos1:");
scanf ("%d", &Pontos_Turisticos1);

//entrada de Dados da carta2
printf ("\nInsira os dados para a carta2:\n");

printf ("Estado2:");
scanf ("%s", &Estado2);

printf  ("Codigo da carta2:");
scanf ("%s", &Codigo_da_carta2);

printf ("Cidade2:");
scanf ("%s", &Cidade2);

printf ("Populacao2:");
scanf ("%d", &Populacao2);

printf ("Area2:");
scanf ("%f", &Area2);

printf ("Pib2:");
scanf ("%f", &Pib2);

printf ("Pontos Turisticos2:");
scanf ("%d", &Pontos_Turisticos2);

//Exibicao das cartas para comparacao dos dados

printf ("\nCarta1:\n");
printf ("Estado: %s\n", Estado1);
printf ("Codigo: %s\n", Codigo_da_carta1);
printf ("Cidade: %s\n", Cidade1);
printf ("Populacao: %d\n", Populacao1);
printf ("Area: %2f\n", Area1);
printf ("PIB: %2f\n" , Pib1);
printf ("Pontos Turisticos: %d\n", Pontos_Turisticos1);

printf ("\nCarta2:\n");
printf ("Estado: %s\n", Estado2);
printf ("Codigo: %s\n", Codigo_da_carta2);
printf ("Cidade: %s\n", Cidade2);
printf ("Populacao: %d\n", Populacao2);
printf ("Area: %2f\n", Area2);
printf ("PIB: %2f\n" , Pib2);
printf ("Pontos Turisticos: %d\n", Pontos_Turisticos2);


    return 0;
}
