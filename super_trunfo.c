#include <stdio.h>
#include <string.h>

int main (){
    
    //Cadastro da Primeira Cidade
    char estado1[100], codigodacarda1[20], nomedacidade1[100];
    int populacao1, pontosturisticos1;
    float areakm1, pib1;

    printf ("Cadastro da Primeira Cidade: \n");
    printf ("Codigo da Carta: ");
    scanf ("%s", &codigodacarda1);
    getchar ();
    printf ("Nome da Cidade: ");
    fgets (nomedacidade1, 100, stdin);
    nomedacidade1 [strcspn (nomedacidade1, "\n")] = 0;
    printf ("Nome do Estado: ");
    scanf ("%s", estado1);
    printf ("População: ");
    scanf ("%d", &populacao1);
    printf ("Area em km²: ");
    scanf ("%f", &areakm1);
    printf ("PIB: ");
    scanf ("%f", &pib1);
    printf ("Quantidade de Pontos Turisticos: ");
    scanf ("%d", &pontosturisticos1);

    
    //Cadastro da Segunda Cidade
    char estado2[100], codigodacarda2[20], nomedacidade2[100];
    int populacao2, pontosturisticos2;
    float areakm2, pib2;

    printf ("\nCadastro da Segunda Carta: \n");
    printf ("Codigo da Carta: ");
    scanf ("%s", &codigodacarda2);
    getchar ();
    printf ("Nome da Cidade: ");
    fgets (nomedacidade2, 100, stdin);
    nomedacidade2 [strcspn (nomedacidade2, "\n")] = 0;
    printf ("Nome do Estado: ");
    scanf ("%s", &estado2);
    printf ("População: ");
    scanf ("%d", &populacao2);
    printf ("Area em km²: ");
    scanf ("%f", &areakm2);
    printf ("PIB: ");
    scanf ("%f", &pib2);
    printf ("Quantidade de Pontos Turisticos: ");
    scanf ("%d", &pontosturisticos2);

    //Calcular a densidade populacional e o pib per capita
    float densidadepop1, pibpercapita1, densidadepop2, pibpercapita2;

    densidadepop1 = (float) populacao1 / areakm1;
    pibpercapita1 = (float) (pib1 * 1000000000) / populacao1;
    printf ("\nA densidade populacional da carta 1 é: %.2f hab/km² \n", densidadepop1);
    printf ("O PIB per capita da carta 1 é: %.2f \n", pibpercapita1);

    densidadepop2 = (float) populacao2 / areakm2;
    pibpercapita2 = (float) (pib2 * 1000000000) / populacao2;
    printf ("\nA densidade populacional da carta 2 é: %.2f hab/km² \n", densidadepop2);
    printf ("O PIB per capita da carta 2 é: %.2f \n", pibpercapita2);

    //Comparar um atributo escolhido
    if (pibpercapita1 > pibpercapita2) {
    printf ("\nPIB per capita da cidade 1 e maior que o PIB per capita da cidade 2 \n");
    } else {
    printf (" PIB per capita da cidade 2 e  maior que o PIB per capita da cidade 1 \n");
    }

    //Determinar a carta vencedora
    if (populacao1 > populacao2) {
    printf ("\nNo atributo população a carta 1 venceu\n");
    } else {
    printf ("No atributo população a carta 2 venceu \n");
    }

    if (pontosturisticos1 > pontosturisticos2) {
        printf ("\nNo atributo pontos turisticos a carta 1 venceu\n");
        } else {
        printf ("No atributo pontos turisticos a carta 2 venceu \n");
    }

    if (areakm1 > areakm2) {
        printf ("\nNo atributo área em km² a carta 1 venceu\n");
        } else {
        printf ("No atributo área em km² a carta 2 venceu \n");
    }

    if (pib1 > pib2) {
        printf ("\nNo atributo PIB a carta 1 venceu\n");
        } else {
        printf ("No atributo PIB a carta 2 venceu \n");
    }
    
    if (areakm1 > areakm2) {
        printf ("\nNo atributo área em km² a carta 1 venceu\n");
        } else {
        printf ("No atributo área em km² a carta 2 venceu \n");
    }
    
    if (pibpercapita1 > pibpercapita2) {
        printf ("\nNo atributo PIB per capita a carta 1 venceu\n");
        } else {
        printf ("No atributo PIB per capita a carta 2 venceu \n");
    }

    
    if (densidadepop1 < densidadepop2) {
        printf ("\n No atributo densidade populacional a carta 1 venceu\n");
        } else {
        printf ("No atributo densidade populacional a carta 2 venceu \n");
    }

    return (0);
}