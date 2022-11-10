#include <stdio.h>

long f(int n){
    long a1 = 2;
    long a2 = 1;
    long carry;
    if(n==1)
        return(a1);
    if(n==2)
        return(a2);
    for(int i=3; i<=n; i++){
        if(n%2==0){
            a1 = (n-a2)*a1;
            carry = a1;}
        else{
            a2 = (n+a1)*a2;
            carry = a2;}
    }
    return(carry);
}

void main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        printf("Il result è: %ld\n", f(i));
}