#include <stdio.h>

int main (){

    int resposta = 1;
    float nA, nB, media;
    while (resposta == 1)
    {

        printf("Digite a Nota A :");
          scanf("%f", &nA);

         printf("Digite a Nota B:");
         scanf("%f", &nB);
        media = (nA + nB) / 2;

        printf("Sua media foi de %f\n", media);
        
        printf("Digite 1 para calcular novamente.\nDigite 0 quando quiser encerar. ");
        scanf("%d", &resposta);


    }
    
    printf("Programa encerrado");
    
    return 0;
}