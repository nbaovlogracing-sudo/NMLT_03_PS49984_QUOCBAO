#include <stdio.h>
int main(){
    int dai,rong;
    printf("Nhap chieu dai: ");
    scanf("%d", &dai);
    printf("Nhap chieu rong: ");
    scanf("%d",&rong);
    printf("Dai: %d\nRong: %d\nChu vi: %d\nDien tich: %d",dai,rong,(dai + rong)*2, dai*rong);
    
#define PI 3.14159;
    int r;
    printf("Nhap ban kinh: ");
    scanf("%d",&r);
float cv = r*2*PI;
float dt = r*r*PI;
    printf("r: %d\nChu vi: %f\nDien tich: %f",r,cv,dt);
    return 0;
}