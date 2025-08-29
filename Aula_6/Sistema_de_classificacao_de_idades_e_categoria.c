#include <stdio.h>

int main (){

    int idade, categoria;
    char nome[120];

    printf("Digite o nome do Atleta:");
    scanf("%s", &nome);

    
    printf("Digite a idade do competidor:");
    scanf("%d", &idade);

    printf("Escolha a sua categoria (1 - 3):\n 1 - Amador\n 2 - Atleta\n 3 - Profissional\n");
    scanf("%d", &categoria);

    if (idade < 0 || idade > 120)
    {
    printf("Informe um idade valida");
    } else{

    
    switch (categoria)
    {
    case 1:
        
        break;
    
    default:
        break;
    }
}

    
}