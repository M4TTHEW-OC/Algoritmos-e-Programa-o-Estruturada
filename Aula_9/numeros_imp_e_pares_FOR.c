#include <stdio.h>

    int main (){

        float numero;

        printf("Digite um numero: ");
        scanf("%f", &numero);

        printf("numeros pares: ");
        for (int i = 0; i <= numero; i++)
        {
            
            if (i!=numero)
            {
                printf("%d, ", i * 2);
            } else{
                printf("%d ", i * 2);
            }
            
            
        }
        printf("numeros impares: ");
        for (int i = 0; i <= numero; i++)
        {
            
             if (i!=numero)
            {
                printf ("%d, ", (i * 2) + 1);
            } else{
                printf("%d ", (i * 2) + 1);
            }
            
        }
        

        return 0;

    }