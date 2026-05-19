        #include <stdio.h>

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
                float area1;
                float area2;
                float pib1;
                float pib2;
                float dp1, dp2, pibc1, pibc2; //Densidade Populacional, PIB per Capita
                float superpoder1, superpoder2;

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

                    dp1 = (float)populacao1 / area1;
                    dp2 = (float)populacao2 / area2;
                    pibc1 = (pib1 * 1000000000.0f) / (float)populacao1;
                    pibc2 = (pib2 * 1000000000.0f) / (float)populacao2;
                    superpoder1 = (float)populacao1 + area1 + pib1 + (float)npt1 + pibc1 + (1.0f / dp1);
                    superpoder2 = (float)populacao2 + area2 + pib2 + (float)npt2 + pibc2 + (1.0f / dp2);

                    printf("----------------------------------\n");

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
                        printf("Número dae Pontos Turísticos: %d\n", npt2);
                        printf("Densidade Populacional: %.2f Hab/km²\n", dp2);
                        printf("PIB per Capita: %.2f Reais\n", pibc2);
                        printf("Super Poder: %.2f\n", superpoder2);

                        printf("-----------------------------------------\n");

                        printf("Comparação de Cartas:\n");
                        if(populacao1 > populacao2) {
                            printf("Resultado da População: CARTA %d %s (%s) Venceu!\n", numeroCarta1, nc1, Estado1);
                        } else {
                            printf("Resultado da População: CARTA %d %s (%s) Venceu\n", numeroCarta2, nc2, Estado2);
                        }
                        if(area1 > area2) {
                            printf("Resultado da Área: CARTA %d %s (%s) Venceu!\n", numeroCarta1, nc1, Estado1);
                        } else {
                            printf("Resultado da Área: CARTA %d %s (%s) Venceu!\n", numeroCarta2, nc2, Estado2);
                        }
                        if(pib1 > pib2) {
                            printf("Resultado do PIB: CARTA %d %s (%s) Venceu!\n", numeroCarta1, nc1, Estado1);
                        } else {
                            printf("Resultado do PIB: CARTA %d %s (%s) Venceu!\n", numeroCarta2, nc2, Estado2);
                        }
                        if(npt1 > npt2) {
                            printf("Resultado do Número de Pontos Turísticos: CARTA %d %s (%s) Venceu!\n", numeroCarta1, nc1, Estado1);
                        } else {
                            printf("Resultado do Número de Pontos Turísticos: CARTA %d %s (%s) Venceu!\n", numeroCarta2, nc2, Estado2);
                        }
                        if(dp1 < dp2) {
                            printf("Resultado da Densidade Populacional: CARTA %d %s (%s) Venceu!\n", numeroCarta1, nc1, Estado1);
                        } else {
                            printf("Resultado da Densidade Populacional: CARTA %d %s (%s) Venceu!\n", numeroCarta2, nc2, Estado2);
                        }
                        if(pibc1 > pibc2) {
                            printf("Resultado do PIB per Capita: CARTA %d %s (%s) Venceu!\n", numeroCarta1, nc1, Estado1);
                        } else {
                            printf("Resultado do PIB per Capita: CARTA %d %s (%s) Venceu!\n", numeroCarta2, nc2, Estado2);
                        }
                        if(superpoder1 > superpoder2) {
                            printf("Resultado do Super Poder: CARTA %d %s (%s) Venceu!\n", numeroCarta1, nc1, Estado1);
                        } else {
                            printf("Resultado do Super Poder: CARTA %d %s (%s) Venceu!\n", numeroCarta2, nc2, Estado2);
                        }
                        return 0;



            }