#include <stdio.h>

double fun(int n){
    double sum = 0;
    double im;
    for(int k=0; k<=n; k++){
        im = (2*k + 1);
        sum = sum + (1/(im*im));
    }
    return(sum);
}

void main(){
    int n;
    printf("Inserisci il numero (n): ");
    scanf("%d", &n);
    for(int i=n; i>=0; i--)
        printf("%lf\n", fun(n-i));
}
