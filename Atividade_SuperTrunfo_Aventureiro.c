        #include <stdio.h>

            int main(){
            
                char letra1, letra2;
                char cdc1[5]; //Codigo da capital
                char cdc2[5];
                char nc1[30]; // Nome da Cidade
                char nc2[30];
                int populacao1;
                int populacao2;
                int npt1; // Numero de pontos turisticos
                int npt2;
                float area1;
                float area2;
                float pib1;
                float pib2;
                float dp1, dp2, pibc1, pibc2; //Densidade Populacional, PIB per Capita

                    printf("CARTA 01\n");
                    printf("Estado: \n");
                    scanf(" %c", &letra1);
                    printf("Codigo: \n");
                    scanf("%s", cdc1);
                    printf("Nome da Cidade: \n");
                    scanf("%s", nc1);
                    printf("População: \n");
                    scanf("%d", &populacao1);
                    printf("Area: \n");
                    scanf("%f", &area1);
                    printf("Número de Pontos Turísticos: \n");
                    scanf("%d", &npt1);
                    printf("Digite o PIB: \n");
                    scanf("%f", &pib1);
                    
                    printf("CARTA 02\n");
                    printf("Estado: \n");
                    scanf(" %c", &letra2);
                    printf("Codigo: \n");
                    scanf("%s", cdc2);
                    printf("Nome da Cidade: \n");
                    scanf("%s", nc2);
                    printf("População: \n");
                    scanf("%d", &populacao2);
                    printf("Área: \n");
                    scanf("%f", &area2);
                    printf("PIB: \n");
                    scanf("%f", &pib2);
                    printf("Número de Pontos Turísticos: \n");
                    scanf("%d", &npt2);

                    dp1 = (float)(populacao1 / area1);
                    dp2 = (float)(populacao2 / area2);
                    pibc1 = (pib1 * 1000000000) / populacao1;
                    pibc2 = (pib2 * 1000000000) / populacao2;

                    printf("----------------------------------\n");

                        printf("CARTA 01\n");
                        printf("Estado: %c\n", letra1);
                        printf("Codigo: %s\n", cdc1);
                        printf("Nome da Cidade: %s\n", nc1);
                        printf("População: %d\n", populacao1);
                        printf("Área: %f km²\n", area1);
                        printf("PIB: %f bilhões de Reais\n", pib1);
                        printf("Número de Pontos Turísticos: %d\n", npt1);
                        printf("Densidade Populacional: %.2f Hab/km²\n", dp1);
                        printf("PIB per Capita: %.2f Reais\n", pibc1);
                        printf("-----------------------------------------\n");
                        printf("CARTA 02\n");
                        printf("Estado: %c\n", letra2);
                        printf("Codigo: %s\n", cdc2);
                        printf("Nome da Cidade: %s\n", nc2);
                        printf("População: %d\n", populacao2);
                        printf("Área: %f km²\n", area2);
                        printf("PIB: %f bilhões de Reais\n", pib2);
                        printf("Número de Pontos Turísticos: %d\n", npt2);
                        printf("Densidade Populacional: %.2f Hab/km²\n", dp2);
                        printf("PIB per Capita: %.2f Reais\n", pibc2);
                    
                            return 0;



            }