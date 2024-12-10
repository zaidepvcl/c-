#include <stdio.h>

#define PI 3.14 // khai bao hang so PI

int main(){
	// khai bao ban kinh duong tron
	float radius = 10.0; //khai bao ban kinh duong tron là 10.0
	
	// khai bao bien luu chu vi va dien tich
	float periment; // chu vi hinh tron 
	float area; // dien tich hinh tron 
	
	//tinh chu vi hinh tron 
	periment = 2 * PI * radius;
	
	//tinh dien tich hinh tron 
	area = PI * radius * radius;
	
	//hien thi ket qua 
	printf ("ban kinh hinh tron: %.2f\n", radius);
	printf ("chu vi hinh tron: %.2f\n", periment);
	printf ("dien tich hinh tron: %.2f\n", area);
	
	return 0; // ket thuc chuong trinh  
}
