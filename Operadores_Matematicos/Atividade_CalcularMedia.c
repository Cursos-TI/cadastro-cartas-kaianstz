            #include <stdio.h>

                int main() {
                    int nota1, nota2, nota3;
                    float media;

                    printf("-------Programa de Calcular a Media-------\n");

                    printf("DIgite a Primeira Nota: \n");
                    scanf( "%d", &nota1);

                    printf("DIgite a Segunda Nota: \n");
                    scanf( "%d", &nota2);

                    printf("DIgite a Terceira Nota: \n");
                    scanf( "%d", &nota3);

                    media = (float)(nota1 + nota2 + nota3) /3;

                    printf("A Media e: %.2f\n", media);

                    return 0;


                }