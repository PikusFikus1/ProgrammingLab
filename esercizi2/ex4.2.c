#include <stdio.h>

int fibo(int i){
    if(i==0)
        return(0);
    if(i==1)
        return(1);
    return(fibo(i-1)+fibo(i-2));
}

void main(){
    int n;
    scanf("%d", &n);
    n = fibo(n);
    printf("%d", n);
}


/*
for(int x=0; x<=n; x++){
            printf("P(%d)=%d\n", x, prev);
            fc = f;
            f = f+prev;
            prev = fc;
        }
*/