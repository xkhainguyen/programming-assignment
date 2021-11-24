#include<stdio.h>
#include<math.h>
int main() {
	int m,y;
	printf("Nhap thang nam ");
	scanf("%d %d",&m,&y);
	switch (m) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("31 ngay"); break;
		case 4: case 6: case 9: case 11:
			printf("30 ngay"); break;
		case 2:
			if ((!(y%4)&&(y%100))||!(y%400))
				printf("29 ngay");
			else printf("28 ngay");
			break;
		default: printf("KHONG HOP LE");
	}
}
