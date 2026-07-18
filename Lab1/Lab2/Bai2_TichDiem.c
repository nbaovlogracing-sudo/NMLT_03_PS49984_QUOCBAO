#include <stdio.h>
int main(){
    // Khai báo điểm trung bình
    float toan, ly, hoa, dtb;

    // Nhập điểm số
    printf("TINH DIEM TRUNG BINH (Toan he so 3, Ly he so 2, Hoa he so 1)");
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem ly: ");
    scanf("%f", &ly);
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);

    // Tính điểm trung bình
    dtb = (toan * 3 + ly * 2 + hoa) / 6;

    // Hiển thị kết quả
    printf("\nDiem trung binh: %.2f\n",dtb);

    return 0;
}