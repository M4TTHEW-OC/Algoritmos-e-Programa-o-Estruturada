#include <stdio.h>

    int main (){

        float numero_misterioso, numero = 0;

        printf("Digite o seu Numero misterioso:\n");
        scanf("%f", &numero_misterioso);

        printf("Tente acertar o numero misterioso: ");
            scanf("%f", &numero);

        while (numero_misterioso != numero)
        {
           
            if (numero > numero_misterioso )
            {
                printf("O numero misterioso e menor\n");
            }else if (numero < numero_misterioso)
            {
                printf("O numero misterioso e maior\n");
            } else{
                printf("Digite um número valido");
            }
            
            
            printf("Tente acertar o numero misterioso: ");
            scanf("%f", &numero);

            
            
        }
        
            printf("Parabens vc acertou O numero misterioso!!!!");
        return 0;

    }