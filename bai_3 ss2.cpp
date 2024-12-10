#include <stdio.h>

int main() {
	//khai bao va khoi tao hai so nguyen 
	int a=6; // bien a duoc khoi tao voi gia tri bang 6
	int b=50;// bien b duoc khoi tao voi gia tri bang 50
	
	//khai bao bien de luu ket qua lsn luot hieu, tich, thuong 
	int difference;
	int product;
	int qoutient; //su dung ham float de luu ket qua thuong
	// tinh hieu cua hai so a va b
	difference = a - b;
	// tinh tich cua hai so a va b
	product = a * b;
	// tinh thuong cua hai so a va b 
	qoutient = (float)a / b; // ep kieu float cho a de thuc hien phep chia
	
	// hien thi ket qua 
	printf("hieu cua %d va %d la: %d/n", a, b, difference);
	printf("tich cua %d va %d la: %d/n", a, b,product);
	printf("thuong cua %d va %d la: %.2f/n", a, b,qoutient);
	
	return 0; // ket thuc chuong trinh 
}
