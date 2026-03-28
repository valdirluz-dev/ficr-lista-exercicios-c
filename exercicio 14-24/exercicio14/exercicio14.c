#include <stdio.h>

int main(){
    int valor;

    printf("Digite um valor: ");
    scanf("%d",&valor);

    if(valor>0) printf("valor é positivo");
    if(valor<0) printf("valor é negativo");
    if(valor==0) printf("valor é zero");

    return 0;
}