#include <stdio.h>

int main() {
	// khai bao va khoi tao bien canh hinh vuong
	float side = 10.0; // bien side duoc khoi tao voi gia tri 5.0
	
	// khai bao bien de luu chu vi va dien tich 
	float perimemter; //chu vi 
	float area;      // dien tich 
	
	// tinh chu vi hinh vuong 
	perimemter = 4 * side; 
	
	// tinh dien tich hinh vuong
	area = side * side;
	
	// hien thi ket qua 
	printf("canh hinh vuong: %.2f/n", side);
	printf("chu vi hinh vuong: %.2f/n", perimemter);
	printf("dien tich hinh vuong: %.2f/n", area);
	
	return 0; //ket thuc chuong trinh 
}
