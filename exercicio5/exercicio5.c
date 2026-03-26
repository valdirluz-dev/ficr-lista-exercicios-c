#include <stdio.h>

int main(){
    float cm;
    printf("Digite os centimetros: ");
    scanf("%f",&cm);
    printf("Tamanho em polegadas: %.2f", cm/2.54);
    return 0;
}