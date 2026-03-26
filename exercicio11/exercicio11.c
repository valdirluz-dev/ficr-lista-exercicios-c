#include <stdio.h>

int main(){
    int cedulas [] = {100,50,20,10,5,2,1};
    int compra, pagamento, troco, tamanho;
    
    printf("valor da compra: ");
    scanf("%d", &compra);
    
    printf("valor pago: ");
    scanf("%d", &pagamento);
    
    troco = pagamento - compra;
    tamanho = sizeof(cedulas)/sizeof(cedulas[0]);

    for(int i = 0; i < tamanho; i++){
        printf("troco em notas de %d: %d\n", cedulas[i], troco/cedulas[i]);
        troco = troco%cedulas[i];
    }
    return 0;
}