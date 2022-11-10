#include <stdio.h>
#include <math.h>

double distanza(double x1, double y1, double x2, double y2){
    double x, y, sum;
    x = x1-x2;
    x = x*x;
    y = y1-y2;
    y = y*y;
    sum = x+y;
    return(sqrt(sum));
}


void main(){
    double x1, y1, x2, y2, dis;
    printf("Inserisci il numero (x1): ");
    scanf("%lf", &x1);
    printf("Inserisci il numero (y1): ");
    scanf("%lf", &y1);
    printf("Inserisci il numero (x2): ");
    scanf("%lf", &x2);
    printf("Inserisci il numero (y2): ");
    scanf("%lf", &y2);
    dis = distanza(x1, y1, x2, y2);
    printf("La distanza da xy1 a xy2 è: %lf", dis);
}

