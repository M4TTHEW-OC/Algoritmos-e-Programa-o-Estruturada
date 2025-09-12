#include <stdio.h>

int main() {
    int num, count = 0, maior;
    float media, soma;

    printf("Caso queira encerar digite 0\n");

    while (1) {
        printf("Digite o seu proximo numero:");
        scanf("%d", &num);
        if (num == 0) break;
        count++;
        soma += num;
        if (count == 1 || num > maior) maior = num;
    }

    media = soma / count;

    printf("\n O total de numeros foi %d\n O maior numero = %d\n Sua media foi de :%.2f\n", count, maior, media);

    return 0;
}
