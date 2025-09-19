#include <stdio.h>
#define TAM 10

    int main (){

        int valores [TAM], uso_memoria, tamanho_vetor;
        

        for (int i = 0; i < TAM; i++)
        {
            printf("Digite um dos valores:");
            scanf("%d", &valores[i]);
        }

        printf("Os valores armazenados foram:\n");

        printf("Cresente:\n");
        
        for ( int i = 0; i < TAM ; i++)
        {
            printf("\n%d\n", valores[i]);
        }

        printf("Decresente:\n");

        for ( int i =TAM-1; i > -1 ; i--)
        {
            printf("\n%d\n", valores[i]);
        }

        uso_memoria = sizeof(valores);
        tamanho_vetor = sizeof(valores) / sizeof(valores[0]);

        printf("\n Tamanho de espaco de memoria em bytes %d\n", uso_memoria);
        
        printf("Numero de elementos %d", tamanho_vetor );

        
        printf("");
    
        return 0;
        

    }