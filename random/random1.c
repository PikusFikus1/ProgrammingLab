#include <stdio.h>

void invert(int *x, int *y){
    int carry = *x;
    *x = *y;
    *y = carry;
}

void main(){
    int n, m;
    scanf("%d %d", &n, &m);
    invert(&n, &m);
    printf("Il result è: %d %d\n", n, m);
}