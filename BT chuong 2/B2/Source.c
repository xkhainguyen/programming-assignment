#include<stdio.h>
#include<conio.h>
const float pi = 3.14;
int main() {
	float R;
	printf("Nhap vao ban kinh hinh tron R = ");
	scanf_s("%f", &R);
	printf("Dien tich hinh tron la S = %.4f \n", pi*R*R );
	printf("Chu vi hinh tron la C = %.4f \n", pi*2*R );
	getchar();
	}