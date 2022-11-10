#include <stdio.h>

void main(){
    int w = 0;
    int x, y;
    int [9] = 0;
    
    while(w==0){
        scanf("%d %d", &x, &y);
        x = x-1;
        y = y-1;
        for (int r=0; r<3; r++){
            for (int c=0; c<3; c++){
                if(r==x && c==y){
                    printf("x");
                }else{
                    printf("◘");
                }
            }
            printf("\n");
        }
        }
    }