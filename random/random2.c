#include <stdio.h>

int f(int x){
    
}

void main(){
    int a[5] = {0, 1, -4, -1, -6};

    for (int i = 0; i<5; i++){
        if(a[i]%2!=0||a[i]<0)
            a[i]=1;
        else
            a[i]=0;
    }
    for (int i = 0; i<5; i++){
    printf("%d", a[i]);}

    }