#include <stdio.h>
#include <stdlib.h>
int main() {
int *arr;
int n, i;
printf("Nhap so luong sinh vien: ");
scanf("%d", &n);
// C?p ph�t b? nh? cho m?ng
arr = (int*)malloc(n * sizeof(int));
// Ki?m tra xem b? nh? c� du?c c?p ph�t th�nh c�ng kh�ng
if (arr == NULL) {
printf("Khong the cap phat bo nho.");
exit(1);
}
// Nh?p gi� tr? cho m?ng
for (i = 0; i < n; i++) {
printf("Nhap ma so sinh vien %d: ", i + 1);
scanf("%d", &arr[i]);
}
for ( i = 0;i < n; i++) {
	printf("nhap ten sinh vien %d: ", i + 1);
	scanf ("%d", &arr[i]);
}
// In gi� tr? c?a m?ng
printf("thong tin  sinh vien: ");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
// Gi?i ph�ng b? nh? khi kh�ng c?n s? d?ng n?a
free(arr);
return 0;
}
