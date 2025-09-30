#include <stdio.h>

    int main (){

        float salarioReajuste, salario, encremento, encrementoPrecentual ;

        printf("Digite o seu salario:\n");
        scanf("%f", &salario);

    if (salario > 0){
   

        if (salario < 280) {

            encrementoPrecentual = 0.2;

        encremento = salario * encrementoPrecentual;

         salarioReajuste = salario  + encremento;

            
        } else if (salario > 280 && salario <= 700 ){

            encrementoPrecentual = 0.15;

           encremento = salario * encrementoPrecentual;
           
            salarioReajuste = salario + encremento;

            
            
        } else if (salario > 700 && salario <= 1500)
        {
           encrementoPrecentual = 0.1;

            encremento = salario * encrementoPrecentual;
           
            salarioReajuste = salario + encremento;

            
        } else if (salario > 1500)
        {

            encrementoPrecentual = 0.05;

            encremento = salario * encrementoPrecentual;
           
            salarioReajuste = salario + encremento;

            
        }

        encrementoPrecentual = encrementoPrecentual * 100;
        
        printf("\nSeu salario Inicial era R$%f\n", salario);
        printf("O percentual do seu almento foi de %f\n", encrementoPrecentual);
        printf("O valor do almento no valor de R$ %f\n", encremento);
        printf("Valor do salario apos o reajuste:R$ %f",salarioReajuste);
    }  else{

        printf("Informe um valor Valido");
        

    } 

        
        return 0;

    }