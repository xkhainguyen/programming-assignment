#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct HSSV{
	char shsv[9];
	char hoten[30];
	char lop[20];
	int gioi;
	struct{
		int ngay; int thang ;int nam;} ngaysinh;
	float dtdc;
} sv,ds[1000];
int i,j,n=0;
char tentep[]="dssv.dat";
FILE *f;
void bosung();
void sapxep();
void indslop();
void capnhat();
int main(){
	char ch;
	f=fopen(tentep,"rb");
	if(f){
		fseek(f,0,2);
		n=ftell(f)/sizeof(struct HSSV);
		rewind(f);
		fread(ds,sizeof(sv),n,f);
		fclose(f);
	}
	while(1) {
		system("cls");
		printf("\nCHUONG TRINH QUAN LY SINH VIEN");
		printf("\n1. Bo sung ho so ");
		printf("\n2. Sap xep ho so ");
		printf("\n3. In danh sach lop ");
		printf("\n4. Cap nhat 1 ho so ");
		printf("\nBam 1-4 de chon, phim khac de ket thuc.");
		ch=getch();
		if(ch=='1') bosung();
		else if(ch=='2') sapxep();
		else if(ch=='3') indslop();
		else if(ch=='4') capnhat();
		else{
			printf("\nChan roi a? Y/..");
			ch=getch();
			if(ch=='Y'||ch=='y') break;
		}
	}
	f=fopen(tentep,"wb");
	fwrite(ds,sizeof(sv),n,f);
	fclose(f);
}
void bosung(){
	while(n<1000){
		printf("\nVao ho so sinh vien thu %d",n+1);
		printf("\nSo hieu sv: "); fflush(stdin); gets(ds[n].shsv);
		if(ds[n].shsv[0]=='\0') break;
		printf("\nHo ten sv :"); fflush(stdin); gets(ds[n].hoten);
		printf("\nLop		:"); fflush(stdin); gets(ds[n].lop);
		printf("\nGioi tinh	:"); scanf("%d",&ds[n].gioi);
		printf("\nSinh ngay	:"); scanf("%d",&ds[n].ngaysinh.ngay);
		printf("\nSinh thang:"); scanf("%d",&ds[n].ngaysinh.thang);
		printf("\nSinh nam	:"); scanf("%d",&ds[n].ngaysinh.nam);
		printf("\nDiem tdc	:"); scanf("%f",&ds[n].dtdc);
		n++;
	}
}
int vitri(char *s){
	int l=strlen(s);
	while(s[l]!=' '&&l>-1) l--;
	return l+1;
}
void sapxep(){
	int k;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++)
		if(strcmp(ds[k].hoten+vitri(ds[k].hoten),ds[j].hoten+vitri(ds[j].hoten))>0)
			k=j;
		else if(strcmp(ds[k].hoten+vitri(ds[k].hoten),ds[j].hoten+vitri(ds[j].hoten))==0)
			if(strcmp(ds[k].hoten,ds[j].hoten)>0) k=j;
		if(k!=i){
			sv=ds[i];
			ds[i]=ds[k];
			ds[k]=sv;
		}
	}
	printf("\nDa sap xep xong."); getch();
}
void indslop(){
	char tl[20]; //ten lop
	printf("\nVao ten lop can in: "); fflush(stdin);
	gets(tl);
	printf("\n		DANH SACH SINH VIEN LOP: %s",tl);
	printf("\n-----------------------------------------------------------------");
	printf("\n|  SHSV  |          Ho va Ten           | Ngay sinh|Gioi|DiemTDC|");
	printf("\n|--------|------------------------------|----------|----|-------|");
	for(i=0;i<n;i++){
		if(strcmp(ds[i].lop,tl)==0)
		printf("\n|%-8s|%-30s|%2d/%2d/%4d| %1d  | %5.2f |",ds[i].shsv,ds[i].hoten,ds[i].ngaysinh.ngay,ds[i].ngaysinh.thang,ds[i].ngaysinh.nam,ds[i].gioi,ds[i].dtdc);
	}
	printf("\n|--------|------------------------------|----------|----|-------|");
	getch();
}
void capnhat(){
	char s[9];
	printf("\nNhap so hieu sinh vien can cap nhat: ");
	fflush(stdin); gets(s);
	for(i=0;i<n;i++) if(strcmp(s,ds[i].shsv)==0){
	printf("\nHo ten sv :"); fflush(stdin); gets(ds[i].hoten);
	printf("\nLop		:"); fflush(stdin); gets(ds[i].lop);
	printf("\nGioi tinh	:"); scanf("%d",&ds[i].gioi);
	printf("\nSinh ngay	:"); scanf("%d",&ds[i].ngaysinh.ngay);
	printf("\nSinh thang:"); scanf("%d",&ds[i].ngaysinh.thang);
	printf("\nSinh nam	:"); scanf("%d",&ds[i].ngaysinh.nam);
	printf("\nDiem tdc	:"); scanf("%f",&ds[i].dtdc);
	}
	printf("Cap nhat thanh cong !"); getch();
}
