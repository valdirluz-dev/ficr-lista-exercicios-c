#include <stdio.h>

int main(){
    float salario, vendas, salarioTotal;

    printf("Digite seu salario: ");
    scanf("%f",&salario);
    printf("Digite suas vendas (em R$): ");
    scanf("%f",&vendas);
    
    salarioTotal = salario + (vendas * 0.15);
    
    printf("Salario fixo: %.2f \nSalario Total: %.2f",salario,salarioTotal);
    
    return 0;
}