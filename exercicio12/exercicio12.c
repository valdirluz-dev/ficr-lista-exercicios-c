#include <stdio.h>

int main(){
    
    float m1,m2,m3;
    
    m1 = (7+8+9)/3.0;
    m2 = (4+5+6)/3.0;
    m3 = (m2+m1)/2.0;
    
    printf("soma %.2f\nmedia: %.2f", m1+m2,m3);
    
    return 0;
}