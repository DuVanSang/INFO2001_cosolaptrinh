#include<stdio.h>

int main() {
long long	int a , b ;
long long   int quotient, remainder ;

printf("nhap gia tri nguyen a ,b  (b khac 0 -1018 >=a, b <=1018):");
scanf("%lld%lld", &a, &b);

if (a>=-10^18 && a<=10^18 && b >= -10^18 && b <= 10^18 && b!=0 ) {
quotient = a/b;
remainder = a%b;
printf("phan nguyen va phan du, %d %d" , quotient, remainder );
}else{
("gia tri nhap vao khong hop le");}
return 0;

}
