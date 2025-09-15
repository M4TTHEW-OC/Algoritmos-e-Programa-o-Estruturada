#include <stdio.h>

    int main (){

        int contador = 1;

        for ( contador; contador <= 10; contador++)
        {
           
            if (contador == 5) {
                continue;
            }
            printf("Numero %d\n", contador);
        }
        


        return 0;
    }