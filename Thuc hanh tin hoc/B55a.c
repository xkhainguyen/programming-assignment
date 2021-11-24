#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct hoso{
	char hoten[40];
	float diem;
	char loai[10];
}hs[100],temp;
int n=0,i,j;
char tentep[]="hocsinh.dat";
void bosung();
void xeploai();
void inds();
int main(){
	char ch;
	FILE *f;
	f=fopen(tentep,"rb");
	if(f){
		fseek(f,0,2);
		n=ftell(f)/sizeof(temp);
		rewind(f);
		fread(hs,sizeof(temp),n,f);
		fclose(f);
	}
	while(1){
	system("cls");
	printf("\n          MENU");
	printf("\n1. Bo sung hoc sinh");
	printf("\n2. Xep loai hoc sinh");
	printf("\n3. In DS");
	printf("\nChon chuc nang tu 1-3, phim khac de thoat"); ch=getch();
	if(ch=='1') bosung();
	else if(ch=='2') xeploai();
	else if(ch=='3') inds();
	else{
		printf("\nBan muon thoat? Y/..."); 
		ch=getch();
		if(ch=='Y'||ch=='y') break;
	}
	}
	f=fopen(tentep,"wb");
	fwrite(hs,sizeof(temp),n,f);
	fclose(f);
}
void bosung(){
	while(n<100){
		printf("\nNhap thong tin sinh vien thu %d",n+1);
		printf("\nNhap ho va ten: "); fflush(stdin); gets(hs[n].hoten);
		if(hs[n].hoten[0]=='\0') break;
		printf("\nNhap diem: "); scanf("%f",&hs[n].diem);
		n++;
	}
}
void xeploai(){
	for(i=0;i<n;i++) if(hs[i].diem>=9) strcpy(hs[i].loai,"Gioi");
		else if(hs[i].diem>=7) strcpy(hs[i].loai,"Kha");
		else if(hs[i].diem>=5) strcpy(hs[i].loai,"Trung binh");
		else strcpy(hs[i].loai,"Khong dat");		
		printf("\nXep loai thanh cong!"); getch();
}
void inds(){
	printf("\n            XEP LOAI VAN HOA");
	printf("\n  HO VA TEN        DIEM   XEP LOAI");
	for(i=0;i<n;i++) printf("\n%-18s%-7.2f%-9s",hs[i].hoten,hs[i].diem,hs[i].loai);
	
	getch();
}
