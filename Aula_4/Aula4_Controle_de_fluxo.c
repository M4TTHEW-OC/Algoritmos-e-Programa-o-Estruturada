#include <stdio.h>

    int main (){
        
        int idade;
        printf("Digite a sua idade:");
        scanf("%d", &idade);
        if(idade>= 24){
            printf("Voce e um adulto");
        
        }else if(idade>= 18 && idade<24){
            printf("Maior de idade!");
        }else{
            printf("Menor de idade!");
        }
        
        
        
        
        return 0;

    }