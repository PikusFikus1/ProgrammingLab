#include <stdio.h>

void main(){

    int x = 0;
    int y = 0;

    while(x <=0){
        printf("Immettere un numero positivo x: ");
        scanf("%d", &x);
    }
    while(y <=0){
        printf("Immettere un numero positivo y: ");
        scanf("%d", &y);
    }

    while(x != y){
        if(x < y){
            y = y-x;
        }else{
            x = x-y;
        }
    }
    printf("Il MCD di x e y è: %d\n", x);
    
}