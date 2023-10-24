#include<stdio.h>
#include<math.h>
   int main(){
   int n;
   printf ("nhap so nguyenn n: " , (n>=0 , n<=10));
   scanf("%d", &n);
   if ("n >= 9 && n<=10") {
   	   printf("xuat sac");
   } else if("n>=8 && n<9") {
	   printf("gioi");
   } else if("n<=6.5 && n<8" ) {
	   printf("kha");
   } else if ("n<=5 && n > 6.5" ) {
	   printf ("trung binh");
   } else {
	   printf("yeu");
   }
	 return 0; 
   }	
