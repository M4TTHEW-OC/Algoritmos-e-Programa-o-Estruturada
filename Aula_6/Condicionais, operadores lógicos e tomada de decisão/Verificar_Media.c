#include <stdio.h>

    int main(){

        float n1, n2, n3, media;
        int faltas;
        char nome_aluno[60];

        printf("Informe o nome do Aluno:");
        scanf("%s", &nome_aluno);

        printf("Informe a sua N1: ");
        scanf("%f", &n1);

        printf("Informe a sua N2: ");
        scanf("%f", &n2);

        printf("Informe a sua N3: ");
        scanf("%f", &n3);

        printf("Informe as suas faltas:");
        scanf("%d", &faltas);

        media = (n1 + n2 + n3) / 3;
        printf("%f\n",media);

        if( media == 0 && faltas > 18 ){

            printf(" O aluno %s com a media:%f e SR", nome_aluno);

            } else if (faltas > 18 ) {
                printf("O aluno %s foi reprovado por faltas ", nome_aluno);

             } else if (media >= 9 && media <= 10 && faltas <= 18) {
                printf("O aluno %s tendo seguinte media:%.2f ocasionando  ser SS", nome_aluno, media);

             } else if (media >= 7 && media < 9 && faltas <= 18) {
                printf("O aluno %s tendo seguinte media:%.2f ocasionando ser MS", nome_aluno, media);
            
             } else if (media >= 5 && media < 7 && faltas <= 18){
                 printf("O aluno %s tendo seguinte media:%.2f ocasionando ser MI", nome_aluno, media);

             } else if (media >= 3 && media < 5 && faltas <= 18) {
                printf("O aluno %s tendo seguinte media:%.2f ocasionando ser MM", nome_aluno, media);
            
             } else{
                 printf("O aluno %s tendo seguinte media:%.2f ocasionando ser II", nome_aluno, media);
             }
            
        return 0;
    }