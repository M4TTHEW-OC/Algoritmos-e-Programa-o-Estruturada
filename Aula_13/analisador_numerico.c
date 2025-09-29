#include <stdio.h>
#define TAM 10

    int main (){

        int valores [TAM],i = 0, numMaior, numMenor, numerosPares = 0, numerosImpares = 0, n, encontrar = 0;
        float mediaAritmetica, soma = 0;

        printf("\nBem vindo ao ordenador Numerico\n");

        for (i  ; i < TAM; i++)
        {
            printf("Insira o um numero por vez:\n");
            scanf("%d", &valores[i]);

            if (i == 0 || valores[i] > numMaior) numMaior = valores[i];

            if (i == 0 || valores[i] < numMenor) numMenor = valores[i];

            if (valores[i] % 2 == 0) {
                numerosPares++;
            } 

            if (valores[i] % 2 != 0) {
                numerosImpares++;
            } 
            
        
            soma = soma + valores[i];
            
        }

        
        mediaAritmetica = soma / i;

            printf("O menor numero foi %d\n", numMenor);

            printf("O maior numero foi %d\n", numMaior);  

            printf("A quantidade de numeros pares foi: %d\n", numerosPares);

            printf("A quantidade de numeros pares foi: %d\n", numerosImpares);

            printf("A media aritmetica %.2f \n", mediaAritmetica);

            printf("Digite um numero para verificar se esta no vetor:");
            scanf("%d", &n);

        for ( i = 0; i < TAM ; i++){
            if (valores[i] == n){
                printf("O numero %d foi encontrado na posicao %d", n, i);
                encontrar = 1;
            }
        }  
            if (  !encontrar) {
                printf("O numero %d nao foi encontrado no vetor\n", n);
                
            }
            
        
        
        
        return 0;
    
        }
        
    