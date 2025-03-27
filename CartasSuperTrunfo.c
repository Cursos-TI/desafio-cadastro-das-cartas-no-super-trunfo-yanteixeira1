#include <stdio.h>
#include <string.h>

int main (){
    
    //Cadastro da Primeira Cidade
    char estado1[100];
    char codigodacarda1[20];
    char nomedacidade1[100];
    int populacao1;
    float areakm1;
    float pib1;
    int pontosturisticos1;

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
    char estado2[60];
    char codigodacarda2[20];
    char nomedacidade2[30];
    int populacao2;
    float areakm2;
    float pib2;
    int pontosturisticos2;

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

    //exibição das cartas cadastradas

    printf ("\nCartas cadastradas: \n");

    printf ("\nPrimeira Carta: \n");
    printf ("Codigo da Carta: %s\n", codigodacarda1);
    printf ("Nomde da Cidade: %s\n", nomedacidade1);
    printf ("Nome do Estado: %s\n", estado1);
    printf ("População da Cidade: %d\n", populacao1);
    printf ("Area em km²: %.2f\n", areakm1);
    printf ("PIB R$: %.2f\n", pib1);
    printf ("Quantidade de Pontos Turisiticos: %d\n", pontosturisticos1);

    printf ("\nSegunda Carta: \n");
    printf ("Codigo da Carta: %s\n", codigodacarda2);
    printf ("Nomde da Cidade: %s\n", nomedacidade2);
    printf ("Nome do Estado: %s\n", estado2);
    printf ("População da Cidade: %d\n", populacao2);
    printf ("Area em km²: %.2f\n", areakm2);
    printf ("PIB R$: %.2f\n", pib2);
    printf ("Quantidade de Pontos Turisiticos: %d\n", pontosturisticos2);
    

    return 0;
}