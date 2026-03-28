#include <stdio.h>

int main(){

    int i;

    printf("Digite um numero ");
    scanf("%d",&i);

    if(i<0) i = -i;

    printf("%d", i);
    return 0;
}