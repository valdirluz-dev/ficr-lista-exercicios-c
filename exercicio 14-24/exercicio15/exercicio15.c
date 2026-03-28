#include <stdio.h>

int main(){

    int value;

    printf("Digite um valor: ");
    scanf("%d",&value);

    if (value%2 == 0) printf("Valor é par !");
    else printf("Valor é impar !");

    return 0;

}