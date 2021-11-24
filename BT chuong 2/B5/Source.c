#include<stdio.h>
typedef struct {
	int slhoc;
	float diem;
}mon;
typedef struct {
	float diemtb;
	char mssv[15];
	mon s[4];
} Sinhvien;
int main() {
	int i,j ;
	Sinhvien sv[2];
	for (i = 0; i < 2; i++) {
		printf("Nhap mssv: "); fflush(stdin); scanf_s("%s", sv[i].mssv);
		printf("Nhap diem tb: "); scanf_s("%f", &sv[i].diemtb);
		for (j = 0; j < 4; j++) {
			printf("Mon %s\n", j == 0? "Toan" : (j == 1 ? "Ly" : (j == 2 ? "Hoa" : "Anh")));
			printf("So lan hoc la: "); scanf_s("%d", &sv[i].s[j].slhoc);
			printf("Diem mon hoc la: "); scanf_s("%f", &sv[i].s[j].diem);
		}
	}
	printf("IN THONG TIN SINH VIEN\n");
	for (i = 0; i < 2; i++) {
		printf("MSSV: %s\n", sv[i].mssv);
		printf("Diem tb: %f\n", sv[i].diemtb);
		for (j = 0; j < 4; j++) {
			printf("Mon %s\n", j == 0?"Toan" : j == 1 ? "Ly" : j == 2 ? "Hoa" : "Anh");
			printf("So lan hoc la: %d\n", sv[i].s[j].slhoc);
			printf("Diem mon hoc la: %f\n", sv[i].s[j].diem);
		}
	}
}