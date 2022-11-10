#include <stdio.h>
/*
double fun(int x){
    if(x==1){
        return(0.5);
    }
    else{
        return((fun(x-1)+1)/2);
    }
}
*/

double fun(int x){
    double result;
    for(int i=1; i<=x; i++){
        if(i==1)
            result = 0.5;
        else
            result = (result+1)/2;
        }
    return(result);
}

void main(){
    int x;
    printf("Inserisci il numero (x): ");
    scanf("%d", &x);
    printf("%lf", fun(x));
}