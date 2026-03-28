#include <stdio.h>

float calc (char c, float consumo){
    float tarifa;
    if(c=='A') tarifa = 0.5;
    else if(c=='B') tarifa = 0.8;
    else if(c=='C') tarifa = 1.0;
    return (float) consumo*tarifa;
}

int main(){
    char c;
    float consumo;

    printf("Digite a classe consumidora (A/B/C): "); scanf(" %c",&c);
    printf("Digite o consumo killowatt/hora: "); scanf("%f",&consumo);

    float vf = calc(c, consumo);
    float vp = vf*1.3;

    printf("valor a pagar: %.2f", vp);

    return 0;
}