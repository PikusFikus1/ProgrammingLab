#include <stdio.h>

void main(){
    int x, y, z;
    printf("Inserisci il numero (x): ");
    scanf("%d", &x);
    printf("Inserisci il numero (y): ");
    scanf("%d", &y);
    printf("Inserisci il numero (z): ");
    scanf("%d", &z);
    
    minimo(x, minimo(y,z));
}

int minimo(int x, int y){
    int w;
    int min;
    //max{x,y}
    if(x>=y){
        w = x;
    }else{
        w = y;
    }
    //minimo tra x,y,i
    for(int i=1; i<=w; i++){
        if(i<=x && i<=y){
            min = i;
        }
        printf("Tripletta (%d, %d, %d) - minimo: %d\n", x, y, i, min);
    }
    return min;
}