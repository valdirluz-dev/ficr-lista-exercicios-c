#include <stdio.h>
#include <math.h>
#define M_PI 3.14

int main(){
    float raio, altura, area, volume;

    printf("Digite a altura: ");
    scanf("%f", &altura);
    
    printf("Digite o raio: ");
    scanf("%f", &raio);
    
    area = 2*M_PI*raio*(altura+raio);
    volume = M_PI*pow(raio,2)*altura;
    
    printf("area: %.2f \nVolume: %.2f", area, volume);
    return 0;
}