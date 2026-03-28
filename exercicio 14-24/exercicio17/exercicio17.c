#include <stdio.h>

int main(){
    float n1,n2;

    printf("Digite n1: "); 
    scanf("%f",&n1);
    
    printf("Digite n2: "); 
    scanf("%f",&n2);

    if (n1==n2) printf("numeros são iguais");
    else{
        (n1>n2) ? printf("maior: %.2f", n1) : printf("maior: %.2f", n2);
        printf("\nnumeros são diferentes");
    }

    return 0;
}