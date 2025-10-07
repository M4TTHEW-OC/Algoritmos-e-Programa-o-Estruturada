#include <stdio.h>
#include <string.h>


    int main (){

        char nome [20], sobreNome [50], completo [70];


        printf("Digite o seu primeiro nome:\n");
        scanf("%s", nome);

        printf("Digite o seu sobrenome:\n");
        //fgets(sobreNome, sizeof (sobreNome), stdin);
        scanf("%s", sobreNome);


        strcpy(completo,nome);
        strcat(completo,"");
        strcat(completo, sobreNome);

        
        printf("Primeiro Nome: %s", nome);
        printf("O Sobrenome: %s", sobreNome);
        printf("O tamanho do nome completo: %d", strlen(completo));


        //Verificar se a primeira letra é M
        //if(toupper(unsigned char) nome[0] == 'M')
        if (strcmp(nome[0], "M") || strcmp(nome[0], "m")){
            printf("\nSim, Inicial com M");
        } else{
            printf("\nNão, Inicial com M");
        }
        
        printf("\nO seu nome completo e: %s", completo);
    }