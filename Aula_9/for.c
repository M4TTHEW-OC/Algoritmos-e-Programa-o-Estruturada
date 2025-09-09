#include <stdio.h>

    int main (){

    //int i = 0; -> pode definir a variavel de controle fora porem eu prefiro declarar dentro do FOR
    float numero, numeroTotal;

        printf("Digite o numero que deseja ver a taboada: ");
        scanf("%f", &numero);
        
        
        for ( int i = 0; i <= 10; i++)
        {
            
            numeroTotal = numero * i;

            printf("%.2f x %d = %.2f\n", numero, i, numeroTotal);

            //i ++;

        }
        


    return 0;
}
