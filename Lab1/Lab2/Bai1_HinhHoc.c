#include <stdio.h>

int main() {
    float chieu_dai, chieu_rong;
    float chu_vi, dien_tich;

    // Nhập dữ liệu từ bàn phím
    printf("Nhập vào chiều dài: ");
    scanf("%f", &chieu_dai);

    printf("Nhập vào chiều rộng: ");
    scanf("%f", &chieu_rong);

    // Tính toán chu vi và diện tích
    chu_vi = (chieu_dai + chieu_rong) * 2;
    dien_tich = chieu_dai * chieu_rong;

    // Hiển thị kết quả ra màn hình
    printf("\n--- KẾT QUẢ ---\n");
    printf("Chu vi hình chữ nhật: %.2f\n", chu_vi);
    printf("Diện tích hình chữ nhật: %.2f\n", dien_tich);

    return 0;
}
#include <stdio.h>

// Khai báo hằng số PI bằng #define
#define PI 3.14159

int main() {
    float ban_kinh;
    float chu_vi, dien_tich;

    // Nhập bán kính từ bàn phím
    printf("Nhập vào bán kính hình tròn: ");
    scanf("%f", &ban_kinh);

    // Tính toán chu vi và diện tích theo công thức
    chu_vi = 2 * PI * ban_kinh;
    dien_tich = PI * ban_kinh * ban_kinh;

    // Hiển thị kết quả ra màn hình
    printf("\n--- KẾT QUẢ ---\n");
    printf("Chu vi hình tròn: %.4f\n", chu_vi);
    printf("Diện tích hình tròn: %.4f\n", dien_tich);

    return 0;
}
