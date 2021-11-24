#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct cautruc1 {
	long SBD;
	char hoten[30],ten[7], lop[15];
	int gt;
	struct{
		int ngsinh, thsinh, nsinh;
	}ntnsinh;
	struct{
		int gk,ck;
	}diemtin;
}cautruc1;
void bosung(cautruc1 *sv,int *sosv){
	int i=*sosv;
	do{
		printf("SV thu %d",i+1);
		printf("\nNhap SBD: "); scanf("%d",&sv[i].SBD); fflush(stdin);
		printf("Nhap ten: "); gets(sv[i].hoten); 
		if(sv[i].hoten[0]=='\0') break;
		tachten(&(sv[i].hoten),&(sv[i].ten));
		fflush(stdin);
		printf("Nhap lop: "); gets(sv[i].lop);
		printf("Nhap ngay (cach) thang (cach) nam sinh: "); 
		scanf("%d %d %d",&sv[i].ntnsinh.ngsinh,&sv[i].ntnsinh.thsinh,&sv[i].ntnsinh.nsinh);
		printf("Nhap diem thi gk (cach) cuoi ki: "); scanf("%d %d",&sv[i].diemtin.gk,&sv[i].diemtin.ck);
		i++;
	}while(i<=1000);
	*sosv=i;
}
void tachten(char *hoten, char *ten){
	int i,j,n=strlen(hoten);
	for(i=n-1;i>0;i--) if(hoten[i]==' ') break;
	for(j=i+1;j<n;j++) ten[j-i-1]=hoten[j];
}
void sapxep(cautruc1 *sv,int sosv){
	int i,j;
	cautruc1 temp;
	for(i=0;i<sosv-1;i++)
		for(j=i+1;j<sosv;j++) if(strcmp(sv[i].ten,sv[j].ten)>0) {
			temp=sv[i];sv[i]=sv[j];sv[j]=temp;
		}
}
void inds(cautruc1 *sv, int sosv, char *Lop){
	int i;
	for(i=0;i<sosv;i++) if(strcmp(sv[i].lop,Lop)==0){
		printf("\n %-15d %-30s",sv[i].SBD,sv[i].hoten);
	}
}
int main(){
	cautruc1 sv[1000];
	long sosv=0;
	int choice;
	char esc='a',Lop[15];
	do{
	system("cls");
	printf("---MENU--- \n");
	printf("1. Bo sung danh sach\n");
	printf("2. Sap xep danh sach\n");
	printf("3. In ra danh sach\n");
	printf("4. Thoat\n");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			system("cls");
			bosung(&sv,&sosv);
			break;
		case 2:
			system("cls");
			sapxep(&sv,sosv);
			break;
		case 3:
			system("cls");
			printf("Chon lop can in ds: "); fflush(stdin); gets(Lop);
			inds(&sv,sosv,Lop);
			getch();
			break;
		case 4:
			system("cls");
			printf("Ban muon thoat?"); fflush(stdin); scanf("%c",&esc);
	}
	if((esc=='C')||(esc=='c')) break;
	}while(1);
}
