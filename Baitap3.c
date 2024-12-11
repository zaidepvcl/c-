#include<stdio.h>

int main()
{
    const float pi = 3.14;
    float r;
    printf("Nhập bán kính r: "); scanf("%f",&r);
    float cv = 2*pi*r;
    float dt = pi*(r*r);
    printf("Chu vi hình tròn là: %.2f\n", cv);
    printf("Diện tích hình tròn là: %.2f", dt);
}