#include <stdio.h>

int main(){
	//khai bao kieu so nguyen kieu so thuc kieu chuoi
	
	int integervar = 3; //kieu so nguyen gia tri khoi tao la 3
	 
	float floatvar = 4.5; //kieu so thuc gia tri khoi tao la 4.5
	
	char charvar = 'A' ; //bien ki tu gia tri khoi tao la A
	
	short shortvar = 10; // so nguyen ngan gia tri khoi tao la 10
	
	long longvar = 1000000; //so nguyen dai gia tri khoi tao là 1000000
	 
	double doublevar = 3.14159; // so nguyen gia tri chuan xac cao duoc khai bao la 3.14159
	
	//hien thi ket qua 
	printf("Gia tri cua so nguyen: %d\n", integervar);
	printf ("kieu so thuc: %,2f\n", floatvar);
	printf ("kieu ki tu: %c\n", charvar);
	printf ("kieu so nguyen ngan: %d\n", shortvar);
	printf ("kieu so nguyen dai: %ld\n", longvar);
	printf ("kieu so nguyen gia tri chuan xac cao: %.5f\n", doublevar);
	
	return 0; //ket thuc chuong trinh 
}
