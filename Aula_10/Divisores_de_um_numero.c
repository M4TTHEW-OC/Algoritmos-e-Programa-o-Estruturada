#include <stdio.h>

    int main (){

        int numero;

        printf("Digite um numero para verificar quais sao os seus divisores:\n");
        scanf("%d", &numero);

        

        for (int i = 1 ; i <= numero ; i++)
        {
              
              if (numero % i == 0)
              {
                 printf("O %d e divisivel por %d\n", numero,i);
              }
              
        }
        
        printf("Esses sao todos os numeros divisores de %d", numero);
        return 0;
    }