#include <stdio.h>

int main(){
    float preco, precoFinal;

    printf("Digite o preço de fabrica: ");
    scanf("%f",&preco);

    precoFinal = preco*1.73; //preço *1,73 = preço + preço* (0.45+0.28)
    printf("preço final: %.2f", precoFinal);

    return 0;
}