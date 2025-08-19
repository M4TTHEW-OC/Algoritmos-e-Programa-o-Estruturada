#include <stdio.h>

int main(){
    //definição de variável
    int idade;
    printf("Digite a sua idade:");
    scanf("%d", &idade);

    //Saida do valor
    printf("Sua idade e %d\n", idade);
    printf("Minha posicao de memoria e %d\n", &idade);
    
    return 0;

}
