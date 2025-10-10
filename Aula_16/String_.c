#include <stdio.h>
#include <string.h>
#include <math.h>


float pitagoras(float v1, float v2){
    return sqrt(pow(v1,2) + pow(v2,2));

}


    int main () {
        float a, b, c;

        printf("Digite o valor do lado A:");
        scanf("%d", &a);

        
        printf("Digite o valor do lado B:");
        scanf("%d", &b);

        
        c = pitagoras (a,b);

        printf("Media do lado C : %f\n", c);
        return 0;
    }