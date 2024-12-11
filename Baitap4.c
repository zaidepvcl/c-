#include <stdio.h>

int main()
{
    float t, v, a;
    printf("Nhập điểm toán: "); scanf("%f", &t);
    printf("Nhập điểm văn: "); scanf("%f", &v);
    printf("Nhập điểm anh: "); scanf("%f", &a);
    float sum = t + v + a;
    float average = sum /3 ;
    printf("Tổng điểm 3 môn là: %.2f", sum);
    printf("Điểm trung bình 3 môn là: %.2f", average);
}