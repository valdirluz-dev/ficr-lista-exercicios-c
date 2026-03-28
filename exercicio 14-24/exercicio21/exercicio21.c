#include <stdio.h>

int main(){
    int l1,l2,l3;

    printf("Digite o lado 1: "); 
    scanf("%d", &l1);
    
    printf("Digite o lado 2: "); 
    scanf("%d", &l2);
    
    printf("Digite o lado 3: "); 
    scanf("%d", &l3);

    if (l1 > (l2+l3)||l2>(l1+l3)||l3>(l2+l1)) printf("Nao e um triangulo");
    else{
        if (l1==l2 && l1==l3) printf ("triangulo equilatero");
        else if (l1==l2 || l1 == l3 || l3 == l2) printf ("triangulo isocele");
        else printf("triangulo escaleno");
    }

    return 0;
}