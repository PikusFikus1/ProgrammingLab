#include <stdio.h>

void main(){
    float x;
    printf("inserire x: ");
    scanf("%f", &x);
    if(x>0){
        printf("%f è positivo \n", x);
    }else if(x<0){
        printf("%f è negativo \n", x);
        x = -x;
    }else{
        printf("x è nullo \n");
    }
    printf("il valore assoluto di x è: %f \n", x);
}