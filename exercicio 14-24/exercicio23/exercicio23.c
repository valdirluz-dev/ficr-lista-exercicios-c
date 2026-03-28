#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d;
    float x1,x2;

    printf("Digite a: "); scanf("%d",&a);
    printf("Digite b: "); scanf("%d",&b);
    printf("Digite c: "); scanf("%d",&c);
    
    d = pow(b,2) - 4*a*c;

    if (d<0) printf ("nao ha raizes reais");
    else if(d==0){
        x1 = (float)-b/(2*a);
        printf("x1 e x2 sao %.2f",x1);
    }
    else{
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("x1: %.2f\nx2: %.2f", x1, x2);
    }

    return 0;
}
