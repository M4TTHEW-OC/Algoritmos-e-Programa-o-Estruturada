#include <stdio.h>
 
int main (){

    float l1, l2, l3;

    printf("Informe o Lado 1 do seu Triangulo:\n");
    scanf("%f", &l1);

    printf("Informe o Lado 2 do seu Triangulo:\n");
    scanf("%f", &l2);

    printf("Informe o Lado 3 do seu Triangulo:\n");
    scanf("%f", &l3);

    if ( l1 > (l2 + l3) || l2 > (l1 + l3) || l3 > (l1 + l2)) {
        printf("Nao e um triangulo");
    
        
    } else if ( l1 == l2 && l1 == l3 && l2 == l3) {
        printf("O seu Tringulo e um Equilatero");

    } else if ((l1 == l2 ||  l1 == l3) || (l2 == l3 || l2 == l1))
    {
        printf("O seu Tringulo e um Isosceles");
    } else if (l1 != l2 && l2 != l3 && l3 != l1)
    {
        printf("O seu Tringulo e um Escaleno");
    }
    

}
