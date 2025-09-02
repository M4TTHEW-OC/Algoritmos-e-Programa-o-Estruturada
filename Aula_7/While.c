#include <stdio.h>

int main (){
    float a, b , c, media;
    int contador = 1;

    while( contador == 1){

        printf ("Digite 3 valores: ");
        scanf("%f %f %f", &a, &b, &c);

        media = (a + b + c) / 3;
        printf("Sua media e %f\n", media);

        printf("Digite 0 para terminar e 1 para continuar: \n");
        scanf("%d", &contador);
    }

    printf("O programa foi encerrado");

    return 0;
}