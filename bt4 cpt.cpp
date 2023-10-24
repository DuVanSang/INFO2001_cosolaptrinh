#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	int sum , diff, product;
	float quotient;
	
	printf("nhap gia tri a,b :");
	scanf("%d %d", &a, &b);
	sum =a + b ;
	diff = a-b ;
	product = a*b ;
	quotient =(float) a/b ;
	printf("Tong hieu tich thuong:%d %d %d %.2f ", sum , diff, product , quotient);
	
	return 0;
    }
