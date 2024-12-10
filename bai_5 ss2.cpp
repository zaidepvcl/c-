#include <stdio.h>

int main(){
	//khai bao va khoi tao chieu dai chieu rong cua hinh chu nhat
	float lenght = 10.0; // bien leght duoc khoi tao voi gia tri 10.0
	float width = 5.0; // bien width duoc khoi tao voi gia tri 5.0
	
	// khai bao bien de luu vao chu vi dien tich
	float periment; // chu vi 
	float area;    // dien tich
	
	//tinh chu vi hinh chu nhat 
	periment = 2 * (lenght + width);
	
	//tinh dien tich hinh chu nhat
	area = lenght * width;
	
	// hien thi ket qua
	printf ("chieu dai cua hinh chu nhat: %.2f\n", lenght);
	printf ("chieu rong cua hinh chu nhat: %.2f\n", width);
	printf ("chu vi hinh chu nhat: %.2f\n", periment);
	printf ("dien tich cua hinh chu nhat: %.2f\n", area);
	
	return 0; // ket thuc chuong trinh  
}
