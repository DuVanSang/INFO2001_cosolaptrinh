#include <stdio.h>
#include <math.h>

int main() {
    long long a, b;
    printf("Nhap gia tri a, b: ");
    scanf("%lld%lld", &a, &b);
    
    long long quotient;
	int remainder;
    
    if (a >=-10^18 && a <=10^18 && b >=-10^18 && b <=10^18 && b != 0) {
        quotient = a / b;
        remainder = a % b;
        printf("Phan nguyen va du: %lld, %lld\n", quotient, remainder);
    } else {
        printf("Gia tri khong hop le  \n");
    }
    
    return 0;
}
