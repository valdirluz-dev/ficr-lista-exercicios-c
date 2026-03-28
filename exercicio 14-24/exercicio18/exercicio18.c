#include <stdio.h>

int main(){
    int quant;
    float valor;

    printf("digite a quantidade: ");
    scanf("%d",&quant);

    (quant >= 12) ? (valor = quant * 0.25) : (valor = quant * 0.30);

    printf("valor total: %.2f", valor);
    return 0;
}