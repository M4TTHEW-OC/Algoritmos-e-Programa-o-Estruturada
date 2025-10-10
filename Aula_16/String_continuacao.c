#include <string.h>
#include <stdio.h>

void paraCaixaAlta (char txt[]){
    for (int i = 0;txt[i] != '\0'; i++){

        txt[i] = toupper ((unsigned char) txt[i]);
    }
    

}
        int main (){

            char frase[500];

                printf("Digite uma frase:");
                fgets(frase, sizeof(frase),stdin);

                printf("Minha frase original: %s\n", frase);

            paraCaixaAlta(frase);

                printf("Outra frase em CAIXA ALTA:: %s\n", frase);

            return 0;
        }