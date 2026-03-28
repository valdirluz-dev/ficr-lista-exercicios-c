#include <stdio.h>

int calculo(int troco, int cedula){
    int quantidade = troco/cedula;
    printf("notas de %d: %d\n", cedula, quantidade);
    return troco%cedula; //resto reutilizado na próxima chamada
}

int main(){
    int troco, preco, pagamento;

    printf("Digite o valor da compra: ");
    scanf("%d",&preco);
    printf("Digite o valor pago: ");
    scanf("%d",&pagamento);

    troco = pagamento - preco;

    troco = calculo (troco, 200); //a partir dessa linha o valor passará a armazenar o resto :)
    troco = calculo (troco, 100);
    troco = calculo (troco, 50);
    troco = calculo (troco, 20);
    troco = calculo (troco, 10);
    troco = calculo (troco, 5);
    troco = calculo (troco, 2);

    return 0;
}