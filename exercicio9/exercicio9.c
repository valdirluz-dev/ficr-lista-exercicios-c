#include <stdio.h>

int main(){
    int A,B, temp;

    printf("Digite o A: ");
    scanf("%d",&A);
    
    printf("Digite o B: ");
    scanf("%d",&B);

    temp = A;
    A = B;
    B = temp;

    printf("A: %d\nB: %d", A, B);

    return 0;
}