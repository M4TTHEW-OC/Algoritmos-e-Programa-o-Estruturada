#include <stdio.h>

int main (){

    int idade, categoria;
    char nome[120], atleta, amador[10], profissional;

    
    printf("Digite o nome do Atleta:");
    scanf("%s", &nome);

    
    printf("Digite a idade do competidor:");
    scanf("%d", &idade);


    if (idade < 0 || idade > 120)
    {
    printf("Informe um idade valida");
    } else if (idade >= 0 && idade <= 120)
    {

        printf("Escolha a sua categoria (1 - 3):\n 1 - Amador\n 2 - Atleta\n 3 - Profissional\n");
    scanf("%d", &categoria);
        switch (categoria)
    {
    case 1:
        categoria = amador;
        break;

    case 2:
        categoria = atleta;
        
        break;

    case 3:
        categoria = profissional;
        break;
    
    default:
        break;
    }
    
    }

    if ( categoria == amador){

        if ((idade >= 0 && idade < 12))
        {
            printf("%s e infantil e amador", nome);
        } else if (idade >= 13 && idade <= 17)
        {
            printf("%s e infantil e amador", nome);
        } else if (idade >= 18 && idade <= 59)
        {
            printf("%s e Adulto e amador", nome);
        } else{
            printf("%s e Senior e amador", nome);
        }
        
        
        
    } else if (categoria == atleta)
    {
        if ((idade >= 0 && idade < 12))
        {
            printf("%s e infantil e atleta", nome);
        } else if (idade >= 13 && idade <= 17)
        {
            printf("%s e infantil e atleta", nome);
        } else if (idade >= 18 && idade <= 59)
        {
            printf("%s e Adulto e atleta", nome);
        } else{
            printf("%s e Senior e atleta", nome);
        }
    }
     
    
    
    
    else if (categoria == profissional)
    {
        if ((idade >= 0 && idade < 12))
        {
            printf("%s e infantil e profissional", nome);
        } else if (idade >= 13 && idade <= 17)
        {
            printf("%s e infantil e profissional", nome);
        } else if (idade >= 18 && idade <= 59)
        {
            printf("%s e Adulto e profissinal", nome);
        } else{
            printf("%s e Senior e profissional", nome);
        }
    } else{
        printf("Informe uma categoria Valida");
    }
    
       
    
        
        
        
        return 0;
        
        
        
    
}

    
