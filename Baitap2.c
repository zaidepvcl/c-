#include <stdio.h>

int main ()
{
    float c, f;
    printf("Nhập nhiệt độ hiện tại (độ C): "); scanf("%f",&c);
    f=(c*1.8)+32;
    printf("Nhiệt độ hiện tại theo độ F là: %.1f", f);
}