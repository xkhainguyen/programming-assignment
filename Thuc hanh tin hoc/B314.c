#include<stdio.h>
int main() {
	int n,i,s,flag;
	do {
		printf("\n Nhap n = "); scanf("%d",&n);
		s=0;
		for (i=1;i<n;i++) if (n%i==0) s=s+i;
		if (s==n) printf("\nLa so hoan hao"); else printf("\n Khong la so hoan hao");
		printf("\n Nhan 0 de ket thuc va khac 0 de tiep tuc: "); scanf("%d",&flag);
	} while (flag!=0);
}
