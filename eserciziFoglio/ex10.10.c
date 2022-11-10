#include <stdio.h>

int n_primo(int x){
    for(int i=2; i<x; i++){
        if(x%i==0)
            return(0);
    }
    return(1);
}

int n_primo_r(int x, int y){
    float resto;
    if(y==1)
        return(1);
    else
        resto = x%y;
    fat = resto * n_primo_r(x, y-1);
    
    
}

void main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
    if(n_primo(i)==1)
        printf("%d è un numero primo\n", i);/*
    else
        printf("%d non è un numero primo\n", i);*/
        }
}