#include <stdio.h>


    int main (){

        float numero, numeroTotal;
        int tabuada = 0;

        printf("Digite o numero que deseja ver a tabuada: ");
        scanf("%f", &numero);

        while (tabuada <= 10)
        {
             
            //tabuada ++; muda total a ordem

            numeroTotal = numero * tabuada;

            printf("%.2f x %d = %.2f\n", numero, tabuada, numeroTotal);

            tabuada ++;

        }
        
        return 0;
    }