#include <stdio.h>

int main() {
    float toan, ly, hoa;
    float diem_trung_binh;

    // Nhập điểm 3 môn từ bàn phím
    printf("Nhập vào điểm môn Toán: ");
    scanf("%f", &toan);

    printf("Nhập vào điểm môn Lý: ");
    scanf("%f", &ly);

    printf("Nhập vào điểm môn Hóa: ");
    scanf("%f", &hoa);

    // Tính điểm trung bình theo hệ số: Toán (hệ số 3), Lý (hệ số 2), Hóa (hệ số 1)
    diem_trung_binh = (toan * 3 + ly * 2 + hoa) / 6;

    // Hiển thị kết quả ra màn hình
    printf("\n--- KẾT QUẢ ---\n");
    printf("Điểm trung bình 3 môn là: %.2f\n", diem_trung_binh);

    return 0;
}
