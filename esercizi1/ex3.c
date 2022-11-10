#include <stdio.h>

void main(){

    int x = 0;
    int y = 0;
    float xc;
    int somma = 0;

    while(x <=0){
        printf("Immettere un numero positivo x: ");
        scanf("%d", &x);
        xc = x;
    }
    while(y <=0){
        printf("Immettere un numero positivo y: ");
        scanf("%d", &y);
    }

    while(x != 0){
        if(xc/2 != x/2){
            somma = somma + y;
            x = (x-0.5)/2;
        }else{
            x = x/2;
        }
    y = y*2;
    printf("%d %d %d \n", x, y, somma);
    }
    printf("%d \n", somma);
}