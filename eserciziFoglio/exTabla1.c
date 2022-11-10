#include <stdio.h>

int som_r(int n){
    if(n==0)
        return(0);
    return(n + som_r(n-1));
}

int som_i(int a, int b){
    int sum = 0;
    for(int i=a; i<=b; i++){
        sum = sum + som_r(i);
    }
    return(sum);
}

void main(){
    int n, m;
    scanf("%d %d", &n, &m);
    n = som_i(n, m);
    printf("Il risultato della sommatoria è: %d", n);
}