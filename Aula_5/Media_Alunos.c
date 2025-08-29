#include <stdio.h>

int main()
{

    int faltas;
    float media, nota;

    printf("Digite a sua nota: ");
    scanf("%f", &nota);

    printf("Digite a sua Faltas: ");
    scanf("%d", &faltas);

    if (nota >= 5 || faltas < 20)
    {

      if(nota >= 9 && faltas < 20){
            printf("extraordinario");
        }

        else if(nota  >= 7 && faltas < 15 ) {
            printf("aprovado");
        }

        else if(nota >= 5 && nota <= 6.99 && faltas < 15) {
            printf("recuperacao");
        }

        else if(nota <= 4.9 && faltas < 20){
             printf("reprovado");
        }

    else{
    printf("reprovado");

    }

    

    }
    return 0;
}