#include <stdio.h>

    int main (){

        int condicao, idade;

        printf("Informe a sua idade: ");
        scanf("%d", &idade);

        while (idade < 0 || idade > 120)
        {

            printf("Informe uma idade Valida entre (0 - 120): ");
            scanf("%d", &idade);

        }
        
        printf("Voce digitou a idade corretamente sendo %d", idade);

        return 0;

    }