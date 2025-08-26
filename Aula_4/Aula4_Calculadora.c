#include <stdio.h>

int main()
{

    float n1, n2;
    float soma, divisao, multiplicar, subitracao;
    char operacao;

    printf("Digite o seu N1:");
    scanf("%f", &n1);

    printf("Digite o seu N2:");
    scanf("%f", &n2);

    printf("Agora selecione a operacao de deseja:\n [S] Soma\n [D] Divisao\n [M] Multiplicar \n [U] Subtrasao\n");
    scanf("%s", &operacao);

    // Calculos

    if (operacao == 'S' || operacao == 's')
    {
        soma = n1 + n2;
        printf("Sua soma foi = %f", soma);
    }

    else if (operacao == 'D' || operacao == 'd')
    {
        divisao = n1 / n2;
        printf("Sua divisao foi = %f", divisao);
    }

    else if (operacao == 'M' || operacao == 'm')
    {
        multiplicar = n1 * n2;
        printf("Sua multiplicacao foi = %f", multiplicar);
    }

    else if (operacao == 'U' || operacao == 'u')
    {
        subitracao = n1 - n2;
        printf("Sua subtracao foi = %f", subitracao);
    }

    return 0;
}