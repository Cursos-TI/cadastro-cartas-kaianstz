        #include <stdio.h>
        #include <stdlib.h>
        #include <time.h>

            int main(){
            
                char Estado1[4], Estado2[4]; // Sigla do estado
                char cdc1[5]; //Codigo da capital
                char cdc2[5];
                char nc1[30]; // Nome da Cidade
                char nc2[30];
                unsigned long int populacao1;
                unsigned long int populacao2;
                int npt1; // Numero de pontos turisticos
                int npt2;
                int numeroCarta1, numeroCarta2;
                int atributo1, atributo2;
                int resultadoatb1, resultadoatb2; // Resultado da comparação do primeiro e segundo atributo
                float area1;
                float area2;
                float pib1;
                float pib2;
                float dp1, dp2, pibc1, pibc2; //Densidade Populacional, PIB per Capita
                float superpoder1, superpoder2;

                    // Entrada de dados para a primeira carta
                    printf("Digite o número da carta: \n");
                    scanf("%d", &numeroCarta1);
                    printf("Estado: \n");
                    scanf(" %s", Estado1);
                    printf("Codigo: \n");
                    scanf("%s", cdc1);
                    printf("Nome da Cidade: \n");
                    scanf("%s", nc1);
                    printf("População: \n");
                    scanf("%lu", &populacao1);
                    printf("Area: \n");
                    scanf("%f", &area1);
                    printf("Número de Pontos Turísticos: \n");
                    scanf("%d", &npt1);
                    printf("Digite o PIB: \n");
                    scanf("%f", &pib1);
                    
                    // Entrada de dados para a segunda carta
                    printf("Digite o número da carta: \n");
                    scanf("%d", &numeroCarta2);
                    printf("Estado: \n");
                    scanf(" %s", Estado2);
                    printf("Codigo: \n");
                    scanf("%s", cdc2);
                    printf("Nome da Cidade: \n");
                    scanf("%s", nc2);
                    printf("População: \n");
                    scanf("%lu", &populacao2);
                    printf("Área: \n");
                    scanf("%f", &area2);
                    printf("PIB: \n");
                    scanf("%f", &pib2);
                    printf("Número de Pontos Turísticos: \n");
                    scanf("%d", &npt2);

                    // Cálculo da Densidade Populacional, PIB per Capita e Super Poder
                    dp1 = (float)populacao1 / area1;
                    dp2 = (float)populacao2 / area2;
                    pibc1 = (pib1 * 1000000000.0f) / (float)populacao1;
                    pibc2 = (pib2 * 1000000000.0f) / (float)populacao2;
                    superpoder1 = (float)populacao1 + area1 + pib1 + (float)npt1 + pibc1 + (1.0f / dp1);
                    superpoder2 = (float)populacao2 + area2 + pib2 + (float)npt2 + pibc2 + (1.0f / dp2);

                    printf("----------------------------------\n");
                        // Exibição dos dados das cartas
                        printf("CARTA: %d\n", numeroCarta1);
                        printf("Estado: %s\n", Estado1);
                        printf("Codigo: %s\n", cdc1);
                        printf("Nome da Cidade: %s\n", nc1);
                        printf("População: %lu\n", populacao1);
                        printf("Área: %.2f km²\n", area1);
                        printf("PIB: %.2f bilhões de Reais\n", pib1);
                        printf("Número de Pontos Turísticos: %d\n", npt1);
                        printf("Densidade Populacional: %.2f Hab/km²\n", dp1);
                        printf("PIB per Capita: %.2f Reais\n", pibc1);
                        printf("Super Poder: %.2f\n", superpoder1);

                        printf("-----------------------------------------\n");

                        printf("CARTA: %d\n", numeroCarta2);
                        printf("Estado: %s\n", Estado2);
                        printf("Codigo: %s\n", cdc2);
                        printf("Nome da Cidade: %s\n", nc2);
                        printf("População: %lu\n", populacao2);
                        printf("Área: %.2f km²\n", area2);
                        printf("PIB: %.2f bilhões de Reais\n", pib2);
                        printf("Número de Pontos Turísticos: %d\n", npt2);
                        printf("Densidade Populacional: %.2f Hab/km²\n", dp2);
                        printf("PIB per Capita: %.2f Reais\n", pibc2);
                        printf("Super Poder: %.2f\n", superpoder2);

                        // 1. MENU DE COMPARAÇÃO
                        printf("-----------------------------------------\n");                        
                        printf("Primeiro Menu de Comparação:\n");
                        printf("1. População\n");
                        printf("2. Área\n");
                        printf("3. PIB\n");
                        printf("4. Número de Pontos Turísticos\n");
                        printf("5. Densidade Populacional\n");
                        printf("Escolha uma opção para comparar: ");
                        scanf("%d", &atributo1);

                        // Comparação do primeiro atributo selecionado
                        switch (atributo1) {
                            case 1:
                                printf("Voce Escolheu a Comparação População...\n");
                                resultadoatb1 = populacao1 > populacao2 ? 1: 0;                                                                  
                                break;
                            case 2:
                                printf("Voce Escolheu a Comparação Área...\n");
                                resultadoatb1 = area1 > area2 ? 1: 0;    
                                break;
                            case 3:
                                printf("Voce Escolheu a Comparação PIB...\n");
                                resultadoatb1 = pib1 > pib2 ? 1: 0;
                                break;
                            case 4:
                                printf("Voce Escolheu a Comparação Número de Pontos Turísticos...\n");
                                resultadoatb1 = npt1 > npt2 ? 1: 0;
                                break;
                            case 5:
                                printf("Voce Escolheu a Comparação Densidade Populacional...\n");
                                resultadoatb1 = dp1 < dp2 ? 1: 0;
                                break;
                            default:
                                printf("Opção inválida. Comparação padrão: Super Poder\n");
                        }

                        // 2. MENU DE COMPARAÇÃO
                        printf("-----------------------------------------\n");                        
                        printf("Segundo Menu de Comparação:\n");
                        printf("1. População\n");
                        printf("2. Área\n");
                        printf("3. PIB\n");
                        printf("4. Número de Pontos Turísticos\n");
                        printf("5. Densidade Populacional\n");
                        printf("Escolha uma opção para comparar: ");
                        scanf("%d", &atributo2);
                        
                        // Verificação para evitar a comparação do mesmo atributo
                        if (atributo1 == atributo2) {
                            printf("Atributo já comparado. Escolha um atributo diferente para a segunda comparação.\n");
                        }

                        // Comparação do Segundo atributo selecionado
                        switch (atributo2) {
                            case 1:
                                printf("Voce Escolheu a Comparação População...\n");
                                resultadoatb2 = populacao1 > populacao2 ? 1: 0;                                                                  
                                break;
                            case 2:
                                printf("Voce Escolheu a Comparação Área...\n");
                                resultadoatb2 = area1 > area2 ? 1: 0;    
                                break;
                            case 3:
                                printf("Voce Escolheu a Comparação PIB...\n");
                                resultadoatb2 = pib1 > pib2 ? 1: 0;
                                break;
                            case 4:
                                printf("Voce Escolheu a Comparação Número de Pontos Turísticos...\n");
                                resultadoatb2 = npt1 > npt2 ? 1: 0;
                                break;
                            case 5:
                                printf("Voce Escolheu a Comparação Densidade Populacional...\n");
                                resultadoatb2 = dp1 < dp2 ? 1: 0;
                                break;
                            default:
                                printf("Opção inválida. Comparação padrão: Super Poder\n");
                        }

                        if (resultadoatb1 && resultadoatb2) {
                            printf("A carta %d é a vencedora!\n", numeroCarta1);
                        } else if (!resultadoatb1 && !resultadoatb2) {
                            printf("A carta %d é a vencedora!\n", numeroCarta2);
                        } else {
                            printf("Empate! Ambas as cartas têm um atributo vencedor.\n");
                        }
        


                        return 0;



            }