        #include <stdio.h>

            int main(){
            
                char letra1, letra2;
                char cdc1[5];
                char cdc2[5];
                char nc1[30];
                char nc2[30];
                int populacao1;
                int populacao2;
                int npt1;
                int npt2;
                double area1;
                double area2;
                double pib1;
                double pib2;

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
                    scanf("%lf", &area1);
                    printf("Número de Pontos Turísticos: \n");
                    scanf("%d", &npt1);
                    printf("Digite o PIB: \n");
                    scanf("%lf", &pib1);
                    
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
                    scanf("%lf", &area2);
                    printf("PIB: \n");
                    scanf("%lf", &pib2);
                    printf("Número de Pontos Turísticos: \n");
                    scanf("%d", &npt2);
                    printf("----------------------------------\n");

                        printf("CARTA 01\n");
                        printf("Estado: %c\n", letra1);
                        printf("Codigo: %s\n", cdc1);
                        printf("Nome da Cidade: %s\n", nc1);
                        printf("População: %d\n", populacao1);
                        printf("Área: %lf km²\n", area1);
                        printf("PIB: %lf bilhões de Reais\n", pib1);
                        printf("Número de Pontos Turísticos: %d\n", npt1);
                        printf("-----------------------------------------\n");
                        printf("CARTA 02\n");
                        printf("Estado: %c\n", letra2);
                        printf("Codigo: %s\n", cdc2);
                        printf("Nome da Cidade: %s\n", nc2);
                        printf("População: %d\n", populacao2);
                        printf("Área: %lf km²\n", area2);
                        printf("PIB: %lf bilhões de Reais\n", pib2);
                        printf("Número de Pontos Turísticos: %d\n", npt2);
                    
                            return 0;



            }