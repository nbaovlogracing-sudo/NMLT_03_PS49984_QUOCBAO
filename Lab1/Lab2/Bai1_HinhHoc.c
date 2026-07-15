#include <stdio.h>
#define PI 3.14159;
const float PII = 3.14159;
int main(){
    //Nhap dai, rong tinh chu vi, dien tich hcn
    float dai, rong, chuViHCN, dienTichHCN, r, chuViHT, dienTichHT;
    printf("Nhap chieu dai:\nNhap chieu rong");
    scanf("%f%f", &dai,&rong);
    chuViHCN = (dai+rong)*2;
    dienTichHCN = dai*rong;
    printf("Hinh chu nhat\nDai: %2.f\nRong: %2.f\nChu vi: %2.f\nDien tich: %2.f",dai,rong,chuViHCN,dienTichHCN);

    printf("\nNhap ban kinh: ");
    scanf("%f", &r);
    chuViHT = r*2*PI;    //duong kinh * PI
    dienTichHT = r*r*PII;
    printf("Hinh tron\nBan kinh: %F\nChu vi: %f\nDien tich: %f",r,chuViHT,dienTichHT);
    return 0;
}