#include <stdio.h>

void main(){
    int n;
    printf("Inserisci un numero intero da tastiera: ");
    scanf("%d", &n);
    n = log(n);
    printf("Il valore inserito è: %d\n", n);
}