#include <stdio.h>

    int main (){

        int multa = 0, i, pesoPeixe, pesoSemMulta = 50;

        

        printf("Digite o peso do peixe ");
        scanf("%d", &pesoPeixe);

    if (pesoSemMulta < pesoPeixe)
    {
        for ( i = 0; pesoSemMulta < pesoPeixe; i++)
       {
        pesoSemMulta++;
        multa = multa + 4;
       }

        printf("Quantidades de kilos a mais %d\n", i);
        printf("Valor da multa foi R$: %d", multa);
    } else {
        printf("O valor do peixe esta dentro das normas");
    }
    
       

        return 0;

    }