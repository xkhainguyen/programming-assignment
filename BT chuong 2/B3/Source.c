#include<stdio.h>
struct HinhChuNhat {
	float dai, rong;
}hcn;
int main() {
	printf("Nhap chieu dai va chieu rong cua hinh chu nhat: ");
	scanf_s("%f %f", &hcn.dai, &hcn.rong);
	printf("hcn dai %f va rong %f", hcn.dai, hcn.rong);
}