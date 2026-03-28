#include <stdio.h>

int main(){

    int num1,num2;
    
    printf("Digite o num1: ");
    scanf("%d", &num1);
    printf("Digite o num2: ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("divisão inválida");
    } else {
    
    printf("Quociente: %d\nResto: %d", num1/num2, num1%num2);
    
    }

    return 0;
}