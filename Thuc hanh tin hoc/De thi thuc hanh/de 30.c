#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct cautruc{
	char mkh[15],hten[30];
	int so;
	long tien;
}cautruc;
void tinhtien(cautruc *kh, int n){
	int i,N;
	long T=0;
	for(i=0;i<n;i++){
	N=kh[i].so;
	if(N>400) {T=T+2587*(N-400);N=400;}
	if(N>300) {T=T+2503*(N-300);N=300;}
	if(N>200) {T=T+2242*(N-200);N=200;}
	if(N>100) {T=T+1786*(N-100);N=100;}
	if(N>50) {T=T+1533*(N-50);N=50;}
	T=T+1484*N;
	kh[i].tien=T;
	}
}	
void bosung(cautruc *kh, int *n){
	int i=0;
	do{
		printf("Ma khach hang: "); fflush(stdin); gets(kh[i].mkh);
		if(kh[i].mkh[0]=='\0') break;
		printf("Ho va ten: "); fflush(stdin); gets(kh[i].hten);
		printf("So Kwh: "); scanf("%d",&kh[i].so);
		i++;
	}while(1);
	*n=i;
}
int main() {
	FILE *f1, *f2;
	int n=0,i,choice;
	char ma_kh[15];
	cautruc kh[100];
	do{
	system("cls");
	printf("1. Bo sung danh sach\n");
	printf("2. Tra cuu danh sach\n");
	printf("3. In danh sach\n");
	scanf("%d",&choice);
	switch(choice){
		case 1: 
			system("cls");
			bosung(kh,&n);
			tinhtien(kh,n);
			break;
		case 2:
			system("cls");
			printf("Tra cuu theo ma khach hang. Nhap ma: ");fflush(stdin);gets(ma_kh);
			for(i=0;i<n;i++) if(strcmp(kh[i].mkh,ma_kh)==0) {
					printf("| Ma khach hang |          Ho va ten           | So Kwh |   Tien nop");
					printf("\n");
					printf("|%-15s|%-30s|%8d|%d",kh[i].mkh,kh[i].hten,kh[i].so,kh[i].tien);
					printf("\n");
			}
			getch();
			break;
		case 3:
			system("cls");
			printf("| STT | Ma khach hang |          Ho va ten           | So Kwh |   Tien nop");
			printf("\n");
			for(i=0;i<n;i++){
				printf("|%5d|%-15s|%-30s|%8d|%d",i+1,kh[i].mkh,kh[i].hten,kh[i].so,kh[i].tien);
				printf("\n");
			}
			getch();
	}
	}while(1);
	
}

