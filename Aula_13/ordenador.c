#include <stdio.h>
#define TAM 10
    int main (){

        int valores [TAM], j,i, temporario ;

        printf("Bem vindo ao ordenador Numerico\n");

        for (int i = 0; i < TAM; i++)
        {
            printf("Insira o um numero por vez:");
            scanf("%d", &valores[i]);


        }

        for ( i = 0; i < TAM; i++)
        {
            printf("%d\n", valores[i]);
           
        }
        
        for ( i = 0; i < 9; i++) {

            for ( j = 0; j < 9 - i; j++){
                if (valores[j] > valores[j + 1]) {
                    temporario = valores[j];
                    valores[j] = valores[j + 1];
                    valores[j + 1] = temporario;
                }
            }  
        }

         printf("\nVetor depois da ordenacao:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", valores[i]);
    }
        
        

        return 0;
        

    }