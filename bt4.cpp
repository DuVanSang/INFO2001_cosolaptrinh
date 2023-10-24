#include <stdio.h>

int main() {
    int a, b;
    int quotient, remainder;
    
    printf("nhap gia tri a,b (b khac 0, -1018<a, b<=1018 ):");
    scanf("%d %d", &a, &b);
    
    quotient = a/b;
    remainder = a%b;
    printf("Phan nguyen va phan du: %d %d" , quotient , remainder );
    
    return 0;
    }
