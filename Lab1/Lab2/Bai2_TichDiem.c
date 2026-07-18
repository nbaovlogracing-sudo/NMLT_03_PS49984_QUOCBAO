#include <stdio.h>
int main(){
    // Khai báo điểm trung bình
    float toan, ly, hoa, dtb;

    // Nhập điểm số
    printf("TINH DIEM TRUNG BINH (Toan he so 3, Ly he so 2, Hoa he so 1)");
    printf("Nhap diem toan: ");
    scanf("%d", &toan);
    printf("Nhap diem ly: ");
    scanf("%d", &ly);
    printf("Nhap diem hoa: ");
    scanf("%d", &hoa);

    // Tính điểm trung bình
    dtb = (toan * 3 + ly * 2 + hoa) / 6;

    // Hiển thị kết quả
    printf("\nDiem trung binh: %2.f\n",dtb);
    
    return 0;
}