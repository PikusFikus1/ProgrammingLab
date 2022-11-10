#include <stdio.h>

float pot(float k, float p){
    if(p == 1)
        return k;
    return(k*pot(k,p-1));
}

float potr(float k, float p){
    float pr = 1;
    for(int i=1; i<=p; i++)
        pr = pr*k;
    return pr;
}

float somm(float n, float k){
    if(n == 1)
        return(k*k/3);
    return(((n*potr(k, n+1))/potr(3,n))+somm(n-1, k));
}

void main(){
    float n;
    float k;
    scanf("%f", &n);
    scanf("%f", &k);
    n = somm(k, n);
    printf("Il result è: %f\n", n);
}