#include <stdio.h>

int main(){

    int n1,n2,n3;

    printf("digite o primeiro numero: "); 
    scanf("%d", &n1);
    
    printf("digite o segundo numero: "); 
    scanf("%d", &n2);
    
    printf("digite o terceiro numero: "); 
    scanf("%d", &n3);

    if (n1>n2 && n1>n3) printf("%d", n1);
    if (n2>n3) printf("%d", n2);
    else printf("%d", n3);

    return 0;

}