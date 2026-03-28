#include <stdio.h>
#include <math.h>


int main(){
    float raio;
    printf("digite o raio: ");
    scanf("%f",&raio);
    printf("Area do circulo: %.2f", pow(raio,2) * 3.14159);
    return 0;
}