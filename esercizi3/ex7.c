#include <stdio.h>

double fun(int an, int p){
double result, fun_c;
    for(int i=1; i<=an; i++){
        if(i==1){
             result = p;   
        }
        else{
            result = 0.5*(result+(p/result+1));   
        }
    }
    return(result);
}

void main(){
    double an, p;
    printf("Inserisci il numero (an): ");
    scanf("%le", &an);
    printf("Inserisci il numero (p): ");
    scanf("%le", &p);
    printf("%lf", fun(an,p));
}