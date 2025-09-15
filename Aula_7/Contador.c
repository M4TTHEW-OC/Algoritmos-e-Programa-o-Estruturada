#include <stdio.h>

int main (){
    float numero , media, soma, total;
    
    printf("Digite um numero: ");
    scanf("%f", &numero);


while (numero>0)
{
    total = total + 1;
    soma = soma + numero;

    printf("\nEntre com um numero: ");
    scanf("%f", &numero);

}

if (total == 0)
{
    printf("Nao foi incerido nem um numero");
}else
{
    if(total == 1){
        printf("\nFoi incerido %.0f  numero", total);
    }else{
        printf("\nForam inceridos %.0f  numero", total);
        printf("\nA media dos numeros digitados foi: %f ", soma/total);
    }


    
}

    return 0;

}