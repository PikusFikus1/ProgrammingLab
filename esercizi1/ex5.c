#include <stdio.h>

void main(){
    int n = 0;
    int x,min,max;
    while(n <= 0){
        printf("Inserisci il numero di numeri");
        scanf("%d", &n);
    }
    for(int i=0; i<n; i++){
        printf("Inserisci il %d. numero: ", i+1);
        scanf("%d", &x);
        if (i==0){
            min = x;
            max = x;
        }
        if(x<min){
            min = x;
        }
        if(x>max){
            max = x;
        }
        
    }
    printf("max: %d    min: %d \n", max, min);
}