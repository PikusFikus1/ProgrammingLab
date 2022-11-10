#include <stdio.h>



int sn(int n){
    if(n==0)
        return(1);
    return(2*sn(n-1));
}

int xab(int a, int b){
    int krat = 1;
    for(int i=a; i<=b/2; i++)
        krat = krat*(sn(i)/a);
    krat = krat-b;
    return(krat);
}

void main(){
    int n, m;
    scanf("%d %d", &n, &m);
    n = xab(n, m);
    printf("%d\n", n);
}