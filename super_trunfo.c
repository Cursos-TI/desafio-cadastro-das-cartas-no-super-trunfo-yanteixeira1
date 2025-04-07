#include <stdio.h>
#include <string.h>

int main (){
    
    //Cadastro da Primeira Cidade
    char estado1[100], codigodacarda1[20], nomedacidade1[100];
    int populacao1, pontosturisticos1;
    float areakm1, pib1;

    printf ("Cadastro da Primeira Cidade: \n");
    printf ("Codigo da Carta: ");
    scanf ("%s", codigodacarda1);
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
    scanf ("%s", codigodacarda2);
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
    printf ("\nNo atributo população a carta 2 venceu \n");
    }

    if (pontosturisticos1 > pontosturisticos2) {
        printf ("\nNo atributo pontos turisticos a carta 1 venceu\n");
        } else {
        printf ("\nNo atributo pontos turisticos a carta 2 venceu \n");
    }

    if (areakm1 > areakm2) {
        printf ("\nNo atributo área em km² a carta 1 venceu\n");
        } else {
        printf ("\nNo atributo área em km² a carta 2 venceu \n");
    }

    if (pib1 > pib2) {
        printf ("\nNo atributo PIB a carta 1 venceu\n");
        } else {
        printf ("\nNo atributo PIB a carta 2 venceu \n");
    }
    
    if (pibpercapita1 > pibpercapita2) {
        printf ("\nNo atributo PIB per capita a carta 1 venceu\n");
        } else {
        printf ("\nNo atributo PIB per capita a carta 2 venceu \n");
    }

    
    if (densidadepop1 < densidadepop2) {
        printf ("\n No atributo densidade populacional a carta 1 venceu\n");
        } else {
        printf ("\nNo atributo densidade populacional a carta 2 venceu \n");
    }

    //Exibir o resultado da comparação
    printf ("\nCarta 01: %s (%s): %d\n", nomedacidade1, estado1, populacao1);
    printf ("\nCarta 02: %s (%s): %d\n", nomedacidade2, estado2, populacao2);
    if (populacao1 > populacao2) {
        printf ("Resultado: Carta 01 %s venceu\n", nomedacidade1);
    } else { ("Resultado: Carta 02 %s venceu\n", nomedacidade2);
    }
    
    //Menu Interativo
    int escolhaopcao;
    printf ("\nQual atributo você quer comparar?\n");
    printf ("1 - População\n");
    printf ("2 - Pontos Turisticos\n");
    printf ("3 - Área km²\n");
    printf ("4 - PIB\n");
    printf ("5 - PIB per capita\n");
    printf ("6 - Densidade Populacional\n");
    scanf ("%d", &escolhaopcao);

    //comparação dos atributos
    switch (escolhaopcao)

    {   

        case 1:
            printf ("\nCarta 01: %s (%s): %d\n", nomedacidade1, estado1, populacao1);
            printf ("Carta 02: %s (%s): %d\n", nomedacidade2, estado2, populacao2);
            if (populacao1 > populacao2 || populacao1 < populacao2) {
                if (populacao1 > populacao2){
                printf ("Resultado: Carta 01 %s venceu\n", nomedacidade1);
                } else { 
                printf("Resultado: Carta 02 %s venceu\n", nomedacidade2);
                }
            } else {
                printf ("As duas cidades tem o mesma quantidade de numero de habitantes\n");
            }
            break;

        case 2:
        printf ("\nCarta 01: %s (%s): %d\n", nomedacidade1, estado1, pontosturisticos1);
        printf ("Carta 02: %s (%s): %d\n", nomedacidade2, estado2, pontosturisticos2);
        if (pontosturisticos1 > pontosturisticos2 || pontosturisticos1 < pontosturisticos2) {
            if (pontosturisticos1 > pontosturisticos2){
            printf ("Resultado: Carta 01 %s venceu\n", nomedacidade1);
            } else { 
            printf("Resultado: Carta 02 %s venceu\n", nomedacidade2);
            }
        } else {
            printf ("As duas cidades tem o mesma quantidade de pontos turisticos\n");
        }
        break;
        
        case 3:
        printf ("\nCarta 01: %s (%s): %f\n", nomedacidade1, estado1, areakm1);
        printf ("Carta 02: %s (%s): %f\n", nomedacidade2, estado2, areakm2);
        if (areakm1 > areakm2 || areakm1 < areakm2) {
            if (pontosturisticos1 > pontosturisticos2){
            printf ("Resultado: Carta 01 %s venceu\n", nomedacidade1);
            } else { 
            printf("Resultado: Carta 02 %s venceu\n", nomedacidade2);
            }
        } else {
            printf ("As duas cidades tem o mesma quantidade de area em km²\n");
        }
        break;

        case 4:
        printf ("\nCarta 01: %s (%s): %f\n", nomedacidade1, estado1, pib1);
        printf ("Carta 02: %s (%s): %f\n", nomedacidade2, estado2, pib2);
        if (pib1 > pib2 || pib1 < pib2) {
            if (pib1 > pib2){
            printf ("Resultado: Carta 01 %s venceu\n", nomedacidade1);
            } else { 
            printf("Resultado: Carta 02 %s venceu\n", nomedacidade2);
            }
        } else {
            printf ("As duas cidades tem o mesmo valor arrecadado de PIB\n");
        }
        break;

        case 5:
        printf ("\nCarta 01: %s (%s): %.2f\n", nomedacidade1, estado1, pibpercapita1);
        printf ("Carta 02: %s (%s): %.2f\n", nomedacidade2, estado2, pibpercapita2);
        if (pibpercapita1 > pibpercapita2 || pibpercapita1 < pibpercapita2) {
            if (pibpercapita1 > pibpercapita2){
            printf ("Resultado: Carta 01 %s venceu\n", nomedacidade1);
            } else { 
            printf("Resultado: Carta 02 %s venceu\n", nomedacidade2);
            }
        } else {
            printf ("As duas cidades tem o mesmo valor de PIB per capita\n");
        }
        break;
        
        case 6:
        printf ("\nCarta 01: %s (%s): %f\n", nomedacidade1, estado1, densidadepop1);
        printf ("Carta 02: %s (%s): %f\n", nomedacidade2, estado2, densidadepop2);
        if (densidadepop1 < densidadepop2 || densidadepop1 > densidadepop2) {
            if (densidadepop1 < densidadepop2){
            printf ("Resultado: Carta 01 %s venceu\n", nomedacidade1);
            } else { 
            printf("Resultado: Carta 02 %s venceu\n", nomedacidade2);
            }
        } else {
            printf ("As duas cidades tem o mesmo valor de densidade populacional\n");
        }
        break;

        default:
            printf ("Você escolheu uma opção inexistente\n");
            break;
    }

    //Inicio do desafio mestre
    int opcao1, opcao2, resultado;
    float soma1, soma2;
    printf("\nAgora você vai escolher duas opções!\n");
    printf("[1] - População.\n");
    printf("[2] - Área.\n");
    printf("[3] - PIB.\n");
    printf("[4] - Pontos Turísticos.\n");
    printf("[5] - Densidade Demográfica.\n");
    printf("Escolha uma das opções acima... ");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
        case 1:
            printf("\n Agora escolha a segunda opcao!\n");
            printf("Obs.: Não pode ser igual a primeira escolha.\n");
            printf("[2] - Área.\n");
            printf("[3] - PIB.\n");
            printf("[4] - Pontos Turísticos.\n");
            printf("[5] - Densidade Demográfica.\n");
            printf("Escolha uma das opções acima... ");
            scanf("%d", &opcao2);
            switch (opcao2)
            {
            
        case 2:
            soma1 = (float)(populacao1 + areakm1);
            soma2 = (float)(populacao2 + areakm2);
            
            printf("\nCarta 01: %s (%s) População: %d, Área: %.2f\n", nomedacidade1, estado1, populacao1, areakm1);
            printf("Carta 02: %s (%s) População: %d, Área: %.2f\n", nomedacidade2, estado2, populacao2, areakm2);
            printf("Carta 01: Soma de População e Área: %.2f\n", soma1);
            printf("Carta 02: Soma de População e Área: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break;
            
        case 3:
            soma1 = (float)(populacao1 + pib1);
            soma2 = (float)(populacao2 + pib2);
            
            printf("\nCarta 01: %s (%s) População: %d, PIB: %.2f\n", nomedacidade1, estado1, populacao1, pib1);
            printf("Carta 02: %s (%s) População: %d, PIB: %.2f\n", nomedacidade2, estado2, populacao2, pib2);
            printf("Carta 01: Soma de População e PIB: %.2f\n", soma1);
            printf("Carta 02: Soma de População e PIB: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break;

        case 4:
            soma1 = (float)(populacao1 + pontosturisticos1);
            soma2 = (float)(populacao2 + pontosturisticos2);
            
            printf("\nCarta 01: %s (%s) População: %d, Pontos Turísticos: %d\n", nomedacidade1, estado1, populacao1, pontosturisticos1);
            printf("Carta 02: %s (%s) População: %d, Pontos Turísticos: %d\n", nomedacidade2, estado2, populacao2, pontosturisticos2);
            printf("Carta 01: Soma de População e Pontos Turísticos: %.2f\n", soma1);
            printf("Carta 02: Soma de População e Pontos Turísticos: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break;

        case 5:
            soma1 = (float)(populacao1 + (areakm1 / populacao1));
            soma2 = (float)(populacao2 + (areakm2 / populacao2));
            
            printf("\nCarta 01: %s (%s) População: %d, Densidade Demográfica: %.2f\n", nomedacidade1, estado1, populacao1, densidadepop1);
            printf("Carta 02: %s (%s) População: %d, Densidade Demográfica: %.2f\n", nomedacidade2, estado2, populacao2, densidadepop2);
            printf("Carta 01: Soma de População e Densidade Demográfica: %.2f\n", soma1);
            printf("Carta 02: Soma de População e Densidade Demográfica: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break; 
            
            default:
                printf("Você escolheu uma opção inexistente!!");
                break;
        }
        break;

        case 2:
        printf("\n Agora escolha a segunda opcao!\n");
        printf("Obs.: Não pode ser igual a primeira escolha.\n");
        printf("[1] - População.\n");
        printf("[3] - PIB.\n");
        printf("[4] - Pontos Turísticos.\n");
        printf("[5] - Densidade Demográfica.\n");
        printf("Escolha uma das opções acima... ");
        scanf("%d", &opcao2);
        switch (opcao2)
        {

        // Comparando Área e População
        case 1:
            soma1 = (float)(areakm1 + populacao1);
            soma2 = (float)(areakm2 + populacao2);
            
            printf("\nCarta 01: %s (%s) Área: %.2f, População: %d\n", nomedacidade1, estado1, areakm1, populacao1);
            printf("Carta 02: %s (%s) Área: %.2f, População: %d\n", nomedacidade2, estado2, areakm2, populacao2);
            printf("Carta 01: Soma de Área e População: %.2f\n", soma1);
            printf("Carta 02: Soma de Área e População: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break;
        //Comparando Área e PIB
        case 3:
            soma1 = (float)(areakm1 + pib1);
            soma2 = (float)(areakm2 + pib2);
            
            printf("\nCarta 01: %s (%s) Área: %.2f, PIB: %.2f\n", nomedacidade1, estado1, areakm1, pib1);
            printf("Carta 02: %s (%s) Área: %.2f, PIB: %.2f\n", nomedacidade2, estado2, areakm2, pib2);
            printf("Carta 01: Soma de Área e PIB: %.2f\n", soma1);
            printf("Carta 02: Soma de Área e PIB: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break;
        
        //Comparando Área e Pontos Turisticos
        case 4:
            soma1 = (float)(areakm1 + pontosturisticos1);
            soma2 = (float)(areakm2 + pontosturisticos2);
            
            printf("\nCarta 01: %s (%s) Área: %.2f, Pontos Turísticos: %d\n", nomedacidade1, estado1, areakm1, pontosturisticos1);
            printf("Carta 02: %s (%s) Área: %.2f, Pontos Turísticos: %d\n", nomedacidade2, estado2, areakm2, pontosturisticos2);
            printf("Carta 01: Soma de Área e Pontos Turísticos: %.2f\n", soma1);
            printf("Carta 02: Soma de Área e Pontos Turísticos: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break;
        
        // Comparando População com Densidade Demográfica
        case 5:
            soma1 = (float)(areakm1 + (areakm1 / populacao1));
            soma2 = (float)(areakm2 + (areakm2 / populacao2));
            
            printf("\nCarta 01: %s (%s) Área: %.2f, Densidade Demográfica: %.2f\n", nomedacidade1, estado1, areakm1, densidadepop1);
            printf("Carta 02: %s (%s) Área: %.2f, Densidade Demográfica: %.2f\n", nomedacidade2, estado2, areakm2, densidadepop2);
            printf("Carta 01: Soma de Área e Densidade Demográfica: %.2f\n", soma1);
            printf("Carta 02: Soma de Área e População: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break; 
            
            default:
                printf("Você escolheu uma opção inexistente!!");
                break;
        }
        break;

         // Comparando Cartas com PIB
              case 3:
                printf("\n Agora escolha a segunda opcao!\n");
                printf("Obs.: Não pode ser igual a primeira escolha.\n");
                printf("[1] - População.\n");
                printf("[2] - Área.\n");
                printf("[4] - Pontos Turísticos.\n");
                printf("[5] - Densidade Demográfica.\n");
                printf("Escolha uma das opções acima... ");
                scanf("%d", &opcao2);
                switch (opcao2)
                {
        // Comparando PIB e População
            case 1:
                soma1 = (float)(pib1 + populacao1);
                soma2 = (float)(pib2 + populacao2);
                
                printf("\nCarta 01: %s (%s) PIB: %.2f, População: %d\n", nomedacidade1, estado1, pib1, populacao1);
                printf("Carta 02: %s (%s) PIB: %.2f, População: %d\n", nomedacidade2, estado2, pib2, populacao2);
                printf("Carta 01: Soma de PIB e População: %.2f\n", soma1);
                printf("Carta 02: Soma de PIB e População: %.2f\n", soma2);
                resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
                if (resultado == 1){
                    printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
                } else if (resultado == 2){
                    printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
                } else {
                    printf("\nResultado da Comparação: Empate!");
                }
                break;

    // Comparando PIB e Área
    case 2:
        soma1 = (float)(pib1 + areakm1);
        soma2 = (float)(pib2 + areakm2);
        
        printf("\nCarta 01: %s (%s) PIB: %.2f, Área: %.2f\n", nomedacidade1, estado1, pib1, areakm1);
        printf("Carta 02: %s (%s) PIB: %.2f, Área: %.2f\n", nomedacidade2, estado2, pib2, areakm2);
        printf("Carta 01: Soma de PIB e Área: %.2f\n", soma1);
        printf("Carta 02: Soma de PIB e Área: %.2f\n", soma2);
        resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
        if (resultado == 1){
            printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
        } else if (resultado == 2){
            printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
        } else {
            printf("\nResultado da Comparação: Empate!");
        }
        break;
        
    // Comparando PIB e Pontos Turísticos
    case 4:
        soma1 = (float)(pib1 + pontosturisticos1);
        soma2 = (float)(pib2 + pontosturisticos2);
        
        printf("\nCarta 01: %s (%s) PIB: %.2f, Pontos Turísticos: %d\n", nomedacidade1, estado1, pib1, pontosturisticos1);
        printf("Carta 02: %s (%s) PIB: %.2f, Pontos Turísticos: %d\n", nomedacidade2, estado2, pib2, pontosturisticos2);
        printf("Carta 01: Soma de PIB e Pontos Turísticos: %.2f\n", soma1);
        printf("Carta 02: Soma de PIB e Pontos Turísticos: %.2f\n", soma2);
        resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
        if (resultado == 1){
            printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
        } else if (resultado == 2){
            printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
        } else {
            printf("\nResultado da Comparação: Empate!");
        }
        break;

    // Comparando PIB com Densidade Demográfica
    case 5:
        soma1 = (float)(pib1 + (areakm1 / populacao1));
        soma2 = (float)(pib2 + (areakm2 / populacao2));
        
        printf("\nCarta 01: %s (%s) PIB: %.2f, Densidade Demográfica: %.2f\n", nomedacidade1, estado1, pib1, densidadepop1);
        printf("Carta 02: %s (%s) PIB: %.2f, Densidade Demográfica: %.2f\n", nomedacidade2, estado2, pib2, densidadepop2);
        printf("Carta 01: Soma de PIB e Densidade Demográfica: %.2f\n", soma1);
        printf("Carta 02: Soma de PIB e Densidade Demográfica: %.2f\n", soma2);
        resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
        if (resultado == 1){
            printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
        } else if (resultado == 2){
            printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
        } else {
            printf("\nResultado da Comparação: Empate!");
        }
        break; 
        
        default:
            printf("Você escolheu uma opção inexistente!!");
            break;
    }
    break;

    //Comparando Cartas com Pontos Turísticos
    case 4:
        printf("\n Agora escolha a segunda opcao!\n");
        printf("Obs.: Não pode ser igual a primeira escolha.\n");
        printf("[1] - População.\n");
        printf("[2] - Área.\n");
        printf("[3] - PIB.\n");
        printf("[5] - Densidade Demográfica.\n");
        printf("Escolha uma das opções acima... ");
        scanf("%d", &opcao2);
        switch (opcao2)
        {

        // Comparando Pontos Turísticos e População
        case 1:
            soma1 = (float)(pontosturisticos1 + populacao1);
            soma2 = (float)(pontosturisticos2 + populacao2);
            
            printf("\nCarta 01: %s (%s) Pontos Turísticos: %d, População: %d\n", nomedacidade1, estado1, pontosturisticos1, populacao1);
            printf("Carta 02: %s (%s) Pontos Turísticos: %d, População: %d\n", nomedacidade2, estado2, pontosturisticos2, populacao2);
            printf("Carta 01: Soma de Pontos Turísticos e População: %.2f\n", soma1);
            printf("Carta 02: Soma de Pontos Turísticos e População: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break;

        // Comparando Pontos Turísticos e Área
        case 2:
            soma1 = (float)(pontosturisticos1 + areakm1);
            soma2 = (float)(pontosturisticos2 + areakm2);
            
            printf("\nCarta 01: %s (%s) Pontos Turísticos: %d, Área: %.2f\n", nomedacidade1, estado1, pontosturisticos1, areakm1);
            printf("Carta 02: %s (%s) Pontos Turísticos: %d, Área: %.2f\n", nomedacidade2, estado2, pontosturisticos2, areakm2);
            printf("Carta 01: Soma de Pontos Turísticos e Área: %.2f\n", soma1);
            printf("Carta 02: Soma de Pontos Turísticos e Área: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break;

        // Comparando Pontos Turísticos e PIB
        case 3:
            soma1 = (float)(pontosturisticos1 + pib1);
            soma2 = (float)(pontosturisticos2 + pib2);
            
            printf("\nCarta 01: %s (%s) Pontos Turísticos: %d, PIB: %.2f\n", nomedacidade1, estado1, pontosturisticos1, pib1);
            printf("Carta 02: %s (%s) Pontos Turísticos: %d, PIB: %.2f\n", nomedacidade2, estado2, pontosturisticos2, pib2);
            printf("Carta 01: Soma de Pontos Turísticos e PIB: %.2f\n", soma1);
            printf("Carta 02: Soma de Pontos Turísticos e PIB: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break;

        // Comparando Pontos Turísticos com Densidade Demográfica
        case 5:
            soma1 = (float)(pontosturisticos1 + (areakm1 / populacao1));
            soma2 = (float)(pontosturisticos2 + (areakm2 / populacao2));
            
            printf("\nCarta 01: %s (%s) Pontos Turísticos: %d, Densidade Demográfica: %.2f\n", nomedacidade1, estado1, pontosturisticos1, densidadepop1);
            printf("Carta 02: %s (%s) Pontos Turísticos: %d, Densidade Demográfica: %.2f\n", nomedacidade2, estado2, pontosturisticos2, densidadepop2);
            printf("Carta 01: Soma de Pontos Turísticos e Densidade Demográfica: %.2f\n", soma1);
            printf("Carta 02: Soma de Pontos Turísticos e Densidade Demográfica: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break; 
            
            default:
                printf("Você escolheu uma opção inexistente!!");
                break;
        }
        break;
        
    // Comparando cartas com Densidade Densidade Demográfica
    case 5:
        printf("\n Agora escolha a segunda opcao!\n");
        printf("Obs.: Não pode ser igual a primeira escolha.\n");
        printf("[1] - População.\n");
        printf("[2] - Área.\n");
        printf("[3] - PIB.\n");
        printf("[4] - Pontos Turísticos.\n");
        printf("Escolha uma das opções acima... ");
        scanf("%d", &opcao2);
        switch (opcao2)
        {

        // Comparando Densidade Demográfica e População
        case 1:
            soma1 = (float)((areakm1 / populacao1) + populacao1);
            soma2 = (float)((areakm1 / populacao1) + populacao2);
            
            printf("\nCarta 01: %s (%s) Densidade Demográfica: %.2f, População: %d\n", nomedacidade1, estado1, densidadepop1, populacao1);
            printf("Carta 02: %s (%s) Densidade Demográfica: %.2f, População: %d\n", nomedacidade2, estado2, densidadepop2, populacao2);
            printf("Carta 01: Soma de Densidade Demográfica e População: %.2f\n", soma1);
            printf("Carta 02: Soma de Densidade Demográfica e População: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break;

        // Comparando Densidade Demográfica e Área
        case 2:
            soma1 = (float)((areakm1 / populacao1) + areakm1);
            soma2 = (float)((areakm1 / populacao1) + areakm2);
            
            printf("\nCarta 01: %s (%s) Densidade Demográfica: %.2f, Área: %.2f\n", nomedacidade1, estado1, densidadepop1, areakm1);
            printf("Carta 02: %s (%s) Densidade Demográfica: %.2f, Área: %.2f\n", nomedacidade2, estado2, densidadepop2, areakm2);
            printf("Carta 01: Soma de Densidade Demográfica e Área: %.2f\n", soma1);
            printf("Carta 02: Soma de Densidade Demográfica e Área: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break;

        // Comparando Densidade Demográfica e PIB
        case 3:
            soma1 = (float)((areakm1 / populacao1) + pib1);
            soma2 = (float)((areakm1 / populacao1) + pib2);
            
            printf("\nCarta 01: %s (%s) Densidade Demográfica: %.2f, PIB: %.2f\n", nomedacidade1, estado1, densidadepop1, pib1);
            printf("Carta 02: %s (%s) Densidade Demográfica: %.2f, PIB: %.2f\n", nomedacidade2, estado2, densidadepop2, pib2);
            printf("Carta 01: Soma de Densidade Demográfica e PIB: %.2f\n", soma1);
            printf("Carta 02: Soma de Densidade Demográfica e PIB: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break;

        // Comparando Densidade Demográfica e Pontos Turísticos
        case 4:
            soma1 = (float)((areakm1 / populacao1) + pontosturisticos1);
            soma2 = (float)((areakm1 / populacao1) + pontosturisticos2);
            
            printf("\nCarta 01: %s (%s) Densidade Demográfica: %.2f, Pontos Turísticos: %d\n", nomedacidade1, estado1, densidadepop1, pontosturisticos1);
            printf("Carta 02: %s (%s) Densidade Demográfica: %.2f, Pontos Turísticos: %d\n", nomedacidade2, estado2, densidadepop2, pontosturisticos2);
            printf("Carta 01: Soma de Densidade Demográfica e Pontos Turísticos: %.2f\n", soma1);
            printf("Carta 02: Soma de Densidade Demográfica e Pontos Turísticos: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", nomedacidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            }
            break; 
            
            default:
                printf("Você escolheu uma opção inexistente!!");
                break;
        }
        break;        
    default:
        printf("Vôce escolheu uma opção inexistente!!");
        break;
    }

    return (0);
}