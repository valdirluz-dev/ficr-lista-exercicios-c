#include <stdio.h>

int calculo(int valor, int cedula){
    int quantidade = valor/cedula;
    printf("notas de %d: %d\n", cedula, quantidade);
    return valor%cedula; //resto reutilizado na próxima chamada
}

int main(){
    int valor;

    printf("Digite o valor a ser sacado: ");
    scanf("%d",&valor);

    valor = calculo (valor, 200); //a partir dessa linha o valor passará a armazenar o resto :)
    valor = calculo (valor, 100);
    valor = calculo (valor, 50);
    valor = calculo (valor, 20);
    valor = calculo (valor, 10);
    valor = calculo (valor, 5);
    valor = calculo (valor, 2);

    return 0;
}