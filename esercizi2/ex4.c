#include <stdio.h>

void main(){
    long n;
    long f = 1;
    long fc;
    long prev = 0;
    scanf("%ld", &n);
        for(int x=0; x<=n; x++){
            printf("P(%d)=%ld\n", x, prev);
            fc = f;
            f = f+prev;
            prev = fc;
        }
}

//disegna la memoria per n=4