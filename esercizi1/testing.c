#include <stdio.h>

void main(){
    float xc;
    for (int x=0; x<100; x++){
        xc = x;
        if(xc/2 != x/2){
            printf("%d \n", x);
        }
    }
}