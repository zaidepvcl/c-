#include <stdio.h>
int main()
{
    float height, length, area;
    printf("Nhập chiều cao tam giác: "); scanf("%f",&height);
    printf("Nhập độ dài cạnh đáy của tam giác: ");scanf("%f",&length);
    printf("Diện tích tam giác là: %.2f", area=0.5*(height*length));
}