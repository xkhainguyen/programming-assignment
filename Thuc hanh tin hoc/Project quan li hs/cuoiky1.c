#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct hososv{
	char ms[15];
	char ten[30];
	int gt;
	char lop[15];
	struct {
		int ngay, thang, nam;
	}sinh;
	float diem;
}sv[1000],temp;
char tentep[]="dssv.dat";
int n=0,i=0,j=0;
FILE *f;
void bosung();
void sapxep();
void inds();
void capnhat();
int main(){
	char ch;
	f=fopen(tentep,"rb");
	if(f){
		fseek(f,0,2);
		n=ftell(f)/sizeof(temp);
		rewind(f);
		fread(sv,sizeof(temp),n,f);
		fclose(f);
	}
	while(1){
		system("cls");
		printf("\n            CHUONG TRINH QUAN LI SINH VIEN");
		printf("\n1. Bo sung danh sach");
		printf("\n2. Sap xep danh sach");
		printf("\n3. In danh sach");
		printf("\n4. Cap nhat danh sach");
		printf("\nChon chuc nang 1-4, phim khac de ket thuc.");
		ch=getch();
		if(ch=='1') bosung();
		else if(ch=='2') sapxep();
		else if(ch=='3') inds();
		else if(ch=='4') capnhat();
		else{
			printf("\nMuon thoat? Y/..."); ch=getch(); if(ch=='Y'||ch=='y') break;
		}
	}
	f=fopen(tentep,"wb");
	fwrite(sv,sizeof(temp),n,f);
	fclose(f);
	gets_s
}
void bosung(){
	system("cls");
	while(n<1000){
		printf("\nVao ho so sinh vien thu %d :",n+1);
		printf("\nMa so sinh vien: "); fflush(stdin); gets(sv[n].ms); if(sv[n].ms[0]=='\0') break;
		printf("\nHo va ten sinh vien: "); fflush(stdin); gets(sv[n].ten);
		printf("\nLop cua sinh vien: "); fflush(stdin); gets(sv[n].lop);
		printf("\nGioi tinh cua sinh vien: "); scanf("%d",&sv[n].gt);
		printf("\nNgay sinh"); scanf("%d",&sv[n].sinh.ngay);
		printf("\nThang sinh"); scanf("%d",&sv[n].sinh.thang);
		printf("\nNam sinh"); scanf("%d",&sv[n].sinh.nam);
		printf("\nDiem thi cua sinh vien"); scanf("%f",&sv[n].diem);
		n++;
	}
}
int vt(char *s){
	int l=strlen(s);
	while(s[l]!=' '&&l>-1) l--;
	return l+1;
}					
void sapxep(){
	int min;
	system("cls");
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++) if(strcmp(sv[min].ten+vt(sv[min].ten),sv[j].ten+vt(sv[j].ten))>0) min=j;
			else if(strcmp(sv[min].ten+vt(sv[min].ten),sv[j].ten+vt(sv[j].ten))==0) if(strcmp(sv[min].ten,sv[j].ten)>0) min=j;
		if(min!=i){temp=sv[i];sv[i]=sv[min];sv[min]=temp;
		}
	}
	printf("\nDa sap xep xong !"); getch();
}
void inds(){
	char s[15];
	system("cls");
	printf("\nChon lop can in: "); fflush(stdin); gets(s);
	printf("\n             DANH SACH SINH VIEN LOP %-s",s);
	printf("\n------------------------------------------------------");
	printf("\n|  MSSV  |     Ho va ten     |Gioi| Ngay sinh | Diem |");
	printf("\n|--------|-------------------|----|-----------|------|");
	for(i=0;i<n;i++) if(strcmp(sv[i].lop,s)==0) 
		printf("\n|%-8s|%-19s|%4d| %2d/%2d/%4d|%6.2f|",sv[i].ms,sv[i].ten,sv[i].gt,sv[i].sinh.ngay,sv[i].sinh.thang,sv[i].sinh.nam,sv[i].diem);
	printf("\n|--------|-------------------|----|-----------|------|");
	getch();
}
void capnhat(){
	char s[15];
	printf("Nhap mssv can cap nhat: ");fflush(stdin);gets(s);
	for(i=0;i<n;i++) if(strcmp(sv[i].ms,s)==0) {
		printf("\nMa so sinh vien: "); fflush(stdin); gets(sv[i].ms); if(sv[i].ms[0]=='\0') break;
		printf("\nHo va ten sinh vien: "); fflush(stdin); gets(sv[i].ten);
		printf("\nLop cua sinh vien: "); fflush(stdin); gets(sv[i].lop);
		printf("\nGioi tinh cua sinh vien: "); scanf("%d",&sv[i].gt);
		printf("\nNgay sinh"); scanf("%d",&sv[i].sinh.ngay);
		printf("\nThang sinh"); scanf("%d",&sv[i].sinh.thang);
		printf("\nNam sinh"); scanf("%d",&sv[i].sinh.nam);
		printf("\nDiem thi cua sinh vien"); scanf("%f",&sv[i].diem);
	}
}
