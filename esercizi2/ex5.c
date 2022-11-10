#include <stdio.h>

void main(){
    int n = 0;
    int k = 0;
    float p;

    while (n<=0){
        printf("inserire n: ");
        scanf("%d", &n);
    }  //prende due numeri solamente se positivi positivi
    while (k<=0){
        printf("inserire k: ");
        scanf("%d", &k);
    }

    if(n>=k){
        p = fattoriale(n)/(fattoriale(k)*(fattoriale(n-k))); //formula per il coefficiente binomiale
        printf("Coefficiente binomiale di %d su %d è: %f \n", n, k, p);
    }else{
        printf("Coefficiente binomiale è 0");
    }
    
}

int fattoriale(int x){
    int f = 1;
    for (int i=1; i<=x; i++){
        f = f*i;
    }
        return(f);
}

fattorialer(int x){
    if(x==0){
        return (1);
    }else{
        return(x*fattorialer(x-1));
    }
}