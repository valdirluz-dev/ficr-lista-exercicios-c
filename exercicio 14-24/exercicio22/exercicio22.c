#include <stdio.h>

int main(){
    int n1,n2, opcao;
    float resultado;

    printf ("digite n1:"); 
    scanf("%d",&n1);
    
    printf ("digite n2:"); 
    scanf("%d",&n2);

    printf("digite uma opção\n1 = SOMA\n2 = SUBTRAÇÃO\n3 = DIVISÃO\n4 = MULTIPLICAÇÃO\n");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1: resultado = n1+n2; break;
    case 2: resultado = n1-n2; break;
    case 3: resultado = (float)n1/n2; break;
    case 4: resultado = n1*n2; break;
    
    default: printf("opção inválida");        
    break;
    }

    printf("Resultado: %.2f", resultado);

    return 0;
    
}