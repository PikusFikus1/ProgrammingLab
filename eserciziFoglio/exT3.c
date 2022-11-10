#include <stdio.h>

void f(int *x, int *y){
    *x = *x+*y;
    *y = (*x-*y)**y;
}

void main(){
    int n, m;
    scanf("%d %d", &n, &m);
    f(&n, &m);
    printf("Il result è: %d %d\n", n, m);
}