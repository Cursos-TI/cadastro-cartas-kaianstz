        #include <stdio.h>

        
        int main(){

            /*
            Incremeto (++)
            Pre-Incremento ++a
            Pos-Incremento a++
            Decremento (--)
            Pre-Decremento --a
            Pos-Decremento a--
            */

            int numero1 = 1, resultado;

                //printf("Antes Incremento: %d\n", numero1);
                 //numero = nuemro +1
                 //numero1 += 1
                 //Pos incremento:
                 //resultado = nuemro1
                 //numero++

                resultado = numero1++;
                //printf("Apos Incremento: %d\n", numero1);
                printf("Apos Pos-Incremento - Numero 1: %d\n - Resultado: %d\n", numero1, resultado);

                resultado = ++numero1;
                printf("Apos Pre-Incremento - Numero 1: %d\n - Resultado: %d\n", numero1, resultado);
                    //numero1 = mnumero1 -1
                    //numero1 -=1

                // numero1--;
                // printf("Apos Decremento: %d\n", numero1);

                resultado = numero1--;
                //printf("Apos Pos-Decremento: %d\n", numero1);
                printf("Apos Pos-Decremento - Numero 1: %d\n - Resultado: %d\n", numero1, resultado);

                resultado = --numero1;
                //printf("Apos Pre-Decremento: %d\n", numero1);
                printf("Apos Pre-Decremento - Numero 1: %d\n - Resultado: %d\n", numero1, resultado);













        }