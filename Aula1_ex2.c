#include <stdio.h>

int main(){
    //definição de variável
    //(inteiro)int n1, n2, n3;

    float n1, n2, n3;
    
    
    printf("Digite o n1:");
    //scanf("%d", &n1); para quando a variável  for int
    scanf("%f", &n1);

   // int soma, divisao, multiplicar, diminuir, media; 
    float soma, divisao, multiplicar, diminuir, media; 


    /*int soma;
    int divisao;
    int multiplicar;
    int diminuir;
    int media;*/
    printf("Digite o n2:");
    //scanf("%d", &n2); para quando a variável  for int 
    scanf("%f", &n3);
    printf("Digite o n3:");
    //scanf("%d", &n3); para quando a variável  for int 
    scanf("%f", &n3);

    soma = n1 + n2 + n3;
    diminuir = n1 - n2 - n3;
    multiplicar = n1 * n3;
    divisao = n1 / n2;
    media = (n1 + n2 + n3) / 3;
    //resultado
    printf("Sua + = %d\n", soma);
    printf("Sua - = %d\n", diminuir);
    printf("Sua * = %d\n", multiplicar);
    printf("Sua / = %d\n", divisao);
    printf("Sua media = %d\n", media);
    
    
    return 0;

}
