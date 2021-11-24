#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
struct hoso{
	char hten[23], ms[15], lop[15];
	struct {
		int ngay;
		int thang;
		int nam;
	} sinh;
	float diem;
} sv[1000],temp;
int n=0,i,j;
FILE *f;
char tentep[]="hoso.dat";
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
		printf("\n           MENU");
		printf("\n1. Bo sung danh sach");
		printf("\n2. Sap xep danh sach");
		printf("\n3. In danh sach");
		printf("\n4. Cap nhat danh sach");
		printf("\nNhan phim 1-4 de chon, phim khac de ket thuc");
		ch=getch();
		if(ch=='1') bosung();
		else if(ch=='2') sapxep();
		else if(ch=='3') inds();
		else if(ch=='4') capnhat();
		else{
			system("cls");
			printf("\nMuon thoat that chu? Y/..."); 
			ch=getch();
			if(ch=='Y'||ch=='y') break;
		}
	}
	f=fopen(tentep,"wb");
	fwrite(sv,sizeof(temp),n,f);
	fclose(f);
}
void bosung(){
	while(n<1000){
		system("cls");
		printf("\nNhap thong tin sinh vien thu %d:",n+1);
		printf("\nNhap ma so sinh vien: "); fflush(stdin); gets(sv[n].ms);
		if(sv[n].ms[0]=='\0') break;
		printf("\nNhap ten sinh vien: "); fflush(stdin); gets(sv[n].hten);
		printf("\nNhap lop sinh vien: "); fflush(stdin); gets(sv[n].lop);
		printf("\nNhap ngay sinh: "); scanf("%d",&sv[n].sinh.ngay);
		printf("\nNhap thang sinh: "); scanf("%d",&sv[n].sinh.thang);
		printf("\nNhap nam sinh: "); scanf("%d",&sv[n].sinh.nam);
		printf("\nNhap diem thi: "); scanf("%f",&sv[n].diem);
		n++;
	}
}
int tach(char *s){
	int l=strlen(s);
	while(s[l]!=' '&&l>-1) l--;
	return l+1;
}
void sapxep(){
	int m;
	for(i=0;i<n-1;i++){
		m=i;
		for(j=i+1;j<n;j++) if(strcmp(sv[m].hten+tach(sv[m].hten),sv[j].hten+tach(sv[j].hten))>0) m=j;
		else if(strcmp(sv[m].hten+tach(sv[m].hten),sv[j].hten+tach(sv[j].hten))==0) if(strcmp(sv[m].hten,sv[j].hten)>0) m=j;
		if(m!=i){temp=sv[i];sv[i]=sv[m];sv[m]=temp;
		}
	}
	printf("\nDa sap xep xong !"); getch();
}
void inds(){
	char s[15];
	system("cls");
	printf("\nChon lop can in? "); fflush(stdin); gets(s);
	printf("\n           DANH SACH SINH VIEN LOP %-s",s);
	printf("\n----------------------------------------------------------");
	printf("\n|   MSSV   |        Ho va ten       | Ngay sinh |  Diem  |");
	printf("\n|----------|------------------------|-----------|--------|");
	for(i=0;i<n;i++) if(strcmp(sv[i].lop,s)==0) 
		printf("\n|%-10s|%-24s|%2d/%2d/%4d |%8.2f|",sv[i].ms,sv[i].hten,sv[i].sinh.ngay,sv[i].sinh.thang,sv[i].sinh.nam,sv[i].diem);
	printf("\n|----------|------------------------|-----------|--------|");
	getch();	
}
void capnhat(){
	char s[15];
	system("cls");
	printf("\nNhap ma so sinh vien can sua: ");fflush(stdin);gets(s);
	for(i=0;i<n;i++) if(strcmp(sv[i].ms,s)==0){
		printf("\nSua thong tin sinh vien %-s:",sv[i].hten);
		printf("\nNhap ma so sinh vien: "); fflush(stdin); gets(sv[i].ms);
		printf("\nNhap ten sinh vien: "); fflush(stdin); gets(sv[i].hten);
		printf("\nNhap lop sinh vien: "); fflush(stdin); gets(sv[i].lop);
		printf("\nNhap ngay sinh: "); scanf("%d",&sv[i].sinh.ngay);
		printf("\nNhap thang sinh: "); scanf("%d",&sv[i].sinh.thang);
		printf("\nNhap nam sinh: "); scanf("%d",&sv[i].sinh.nam);
		printf("\nNhap diem thi: "); scanf("%f",&sv[i].diem);
	}
}
