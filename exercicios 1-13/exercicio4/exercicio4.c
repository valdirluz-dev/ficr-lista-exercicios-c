#include <stdio.h>

int main(){
    float num1,num2;
    printf("Digite o n1: "); 
    scanf("%f", &num1);
    printf("Digite o n2: "); 
    scanf("%f", &num2);

    if(num2==0) {
        
        printf("Divisão inválida!");
    
    } else {

    printf("Soma: %.2f\nProduto: %.2f\nQuociente: %.2f", num1+num2, num1*num2,num1/num2);
    
    }

    return 0;
}