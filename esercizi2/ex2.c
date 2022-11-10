#include <stdio.h>

void main(){
    int n = 0;
    int k = 0;
    int p;
    int somma = 0;

    while (n<=0){
        printf("inserire n: ");
        scanf("%d", &n);
    }
    while (k<=0){
        printf("inserire k: ");
        scanf("%d", &k);
    }

    for (int x=1; x<=n; x++){
        p = 1;
        for (int y=1; y<=x; y++){
            p = p*k;
        }
        somma = somma + p;
    }
    printf("Risultato sommatoria: %d \n", somma);
}