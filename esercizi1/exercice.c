#include <stdio.h>

//stampare quadrati perfetti

void main(){

    int n = 1;
    float m;
    float i = 0;
    float somma = 0;
    
    while(n!=0){
        printf("numero: ");
        scanf("%d", &n);
        if(n!=0){
            i++;
        }
        somma = somma+n;
        printf("%f %f\n", somma, i);   //controllo
    }
    m = somma/i;
    printf("La media è uguale a: %f\n", m);
}