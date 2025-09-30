#include <stdio.h>
#define TAM 12
    int main(){

        int i;

        float temperatura, valores[TAM], soma, media;

        for (i = 0; i < TAM; i++){


            printf("Informe a temperatura do mes: \n", i);
            scanf("%f", &valores[i]);

            soma = soma + valores[i];


        }
        media = soma / i;

        printf("A media de temperaturas dos meses foi igual a %f C", media);

            
            

               for ( i = 0 ; i < TAM; i++)
               {
                switch (valores[i] > media)
                {
                case 1:
                    if (valores[i] > media){
                        printf("Janeiro - %f C", valores[i]);
                    }
                    
                    break;
                
                case 2:
                if (valores[i] > media){
                    printf("Fevereiro - %f C", valores[i]);
                }
                    break;

                
                case 3:
                if(valores[i] > media){
                    printf("Marco - %f C", valores[i]);
                }

                break;

                case 4:
                if(valores[i] > media){
                    printf("Abril - %f C", valores[i]);
                }

                break;

                 case 5:
                if(valores[i] > media){
                    printf("Maio - %f C", valores[i]);
                }

                break;


                 case 6:
                if(valores[i] > media){
                    printf("junho - %f C", valores[i]);
                }

                break;


                 case 7:
                if(valores[i] > media){
                    printf("julho - %f C", valores[i]);
                }

                break;


                 case 8:
                if(valores[i] > media){
                    printf("Agosto - %f C", valores[i]);
                }

                break;

                 case 9:
                if(valores[i] > media){
                    printf("setembro - %f C", valores[i]);
                }

                break;

                 case 10:
                if(valores[i] > media){
                    printf("outubro - %f C", valores[i]);
                }

                break;

                 case 11:
                if(valores[i] > media){
                    printf("Novembro - %f C", valores[i]);
                }

                break;

                 case 12:
                if(valores[i] > media){
                    printf("Dezembro - %f C", valores[i]);
                }

                break;

                }

                return 0;
               }
               
           

         return 0;
    }
       
        
        
        
        
        
        
        
                
                    

                
                

                
                
            
            
            
            
        
        

    