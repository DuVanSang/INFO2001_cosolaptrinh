#include <stdio.h>

int main() {
    int numStudents;

    // Nhap so luong sinh viên trong lop
    printf("Nhap so luong sinh vien trong lop: ");
    scanf("%d", &numStudents);

    // Khai bao mang de luu diem cua tung sinh viên
    float scores[numStudents];

    // Nhap diem cua tung sinh viên
    for (int i = 0; i < numStudents; i++) {
        printf("Nhap diem cua sinh vien %d: ", i + 1);
        scanf("%f", &scores[i]);
    }

    // Tinh diem trung binh
    float totalScore = 0;
    for (int i = 0; i < numStudents; i++) {
        totalScore += scores[i];
    }

    float averageScore = totalScore / numStudents;

    // In ra diem trung bình cua lop
    printf("Diem trung binh cua lop la: %.2f\n", averageScore);

    return 0;
}
