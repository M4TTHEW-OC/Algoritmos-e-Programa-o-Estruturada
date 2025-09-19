#include <stdio.h>

    int main (){

        int numero, contador = 0;

        printf("Digite um numero:\n");
        scanf("%d", &numero);

        contador++;

        while (1)
        {

            printf("Digite o seu proximo numero:\n");
            scanf("%d", &numero);
            if (numero == 0) break;

            contador++;
         
        }
        
        printf("O total de numeros foi de %d", contador);

        return 0;
        
    }