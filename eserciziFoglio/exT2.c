#include <stdio.h>

float sn(float n){
    if(n==0)
        return (1);
    float fak = 2*n+1;
    float fak2 = 1/(fak*fak);
    return(fak2+sn(n-1));
}

void main(){
    float n;
    scanf("%f", &n);
    for (int i=1; i<=n; i++){
    float n = sn(i);
    printf("%f\n", n);
    }
}