            #include <stdio.h>

            int main(){
                
                /*
                SOMA (+)
                SUBTRACAO (-)
                MULTIPLICACAO (*)
                DIVISAO (/)
                */
               
                int numero1, numero2;
                int soma, subtracao, multiplicacao, divisao;

                    printf("Entre com o numero 1: \n");
                    scanf("%d", &numero1);
                    printf("Entre com o numero 2: \n");
                    scanf("%d", &numero2);
                    //OPERACAO SOMA 
                soma = numero1 + numero2;

                    //OPERACAO SUBTRACAO  
                subtracao = numero1 - numero2;

                    //OPERACAO MULTIPLICACAO 
                multiplicacao = numero1 * numero2;
            
                    //OPERACAO DIVISAO
                divisao = numero1 / numero2;


                    printf("A Soma dos Valores e: %d\n", soma);
                    printf("A Subtracao dos Valores e: %d\n", subtracao);
                    printf("A Multiplicacao dos Valores e: %d\n", multiplicacao);
                    printf("A Divisao dos Valores e: %d\n", divisao);















            }