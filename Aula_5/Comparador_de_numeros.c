#include <stdio.h>

int main()
{

    int n1, n2;
    char operacao;

    printf("Digite o seu N1:");
    scanf("%f", &n1);

    printf("Digite o seu N2:");
    scanf("%f", &n2);

    printf("Agora selecione o que deseja:\n [M] Qual o maior numero:\n [I] Quais numeros sao impares: \n [P] Quais numeros sao pares: \n ");
    scanf("%s", &operacao);

    // Calculos

    if (operacao == 'M' || operacao == 'm')
    {
        if(n1 > n2){
            printf("O Numero 1 e Maior!");
        }

        else if(n2 > n1) {
            printf("O Numero 2 e Maior!");
        }

        else {
            printf(" n1 = n2");
        }
    }

    else if (operacao == 'I' || operacao == 'i')
    {
       /* if( n1%2!=0 && n2%2!=0){
              printf("Numero 1 E 2 sao impares ");
        }

        else if(n1% 2 != 0){
                printf("somente Numero 1 impar ");
        }

        else if(n2%2!=0){
                printf("somente Numero 2 impar ");
        }

        else {
            printf("Nem um deles e impar ");
        }

        n1%2!= 0
        */
        if(n1%2!= 0 && n2%2!=0){
         printf(" Numero 1 e Numero 2 sao impares ");
            } else if  (n1%2!=0){
            printf("Somente o Numero 1 e impar ");
     
            } else if(n2%2!= 0){
            printf("Somente o Numero 2 e impar ");
            }else{
            printf("Nem um dos Numeros sao impares");
        }
    }

    return 0;
    
}