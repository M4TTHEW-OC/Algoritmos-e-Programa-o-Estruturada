#include <stdio.h>



int main (){
  
    int ct = 0; 
    //int ct = 10; -> decrecente
    while (ct <= 10)
    {
        printf("Sala %d\n", ct);

        ct ++;

        //ct = ct + 2; -> só números pares 

        //ct = ct + 3; -> só números impares
    }
    
  /*while (ct >= 10) -> decrecente
    {
        printf("Sala %d\n", ct); 

        ct--;
    }*/
    return 0;
}