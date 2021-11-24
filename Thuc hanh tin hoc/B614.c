#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int ifshh(int n) {
	int i,s=0;
	if(n<=0) return -1;
	for(i=1;i<n;i++) if(n%i==0) s=s+i;
	if(s==n) return 1;
	else return 0;
}
int ifsnt(int n) {
	int i;
	if(n<=0) return -1;
	for(i=2;i<=sqrt(n);i++) 
		if(n%i==0) return 0;
	if(i>sqrt(n)) return 1;		
}
int main() {
	int a,n;
	char c;
	do{
	printf("\n1. Kiem tra nguyen to");
	printf("\n2. Kiem tra hoan hao");
	printf("\n3. Thoat\n");
	scanf("%d",&a);
	switch(a) {
		case 1:  
			system("cls");
			do{
			printf("\nNhap vao so duong n: "); scanf("%d",&n);
			}while(a<=0);
			if(ifsnt(n)==1) printf("\nLa so nguyen to");
			else printf("\nKhong la so nguyen to");
			getch();
			break;
		case 2:
			system("cls");
			do{
			printf("\nNhap vao so duong n: "); scanf("%d",&n);
			}while(a<=0);
			if(ifshh(n)==1) printf("\nLa so hoan hao");
			else printf("\nKhong la so hoan hao");
			getch();
			break;
		case 3:
			system("cls");
			printf("\nThoat chuong trinh??? ");
			fflush(stdin);
			scanf("%c",&c);
	}
	if((c=='c')||(c=='C')) break; 
	system("cls");
	}while(1);
}
