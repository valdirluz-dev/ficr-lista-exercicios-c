#include <stdio.h>

int main(){
    int cedulas[] = {100,50,20,10,5,2,1};
    int valor;

    printf("Digite o valor a ser sacado: ");
    scanf("%d",&valor);

    int tamanho = sizeof(cedulas) / sizeof(cedulas[0]);

    for (int i = 0; i < tamanho; i++){
        int quantidade = valor / cedulas[i];
        printf("notas de %d: %d\n", cedulas[i], quantidade);
        valor = valor % cedulas[i];
    }

    return 0;
}