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
void tachten(char *hoten, char *ten){
	int i,j,n=strlen(hoten);
	for(i=n-1;i>0;i--) if(hoten[i]==' ') break;
	for(j=i+1;j<n;j++) ten[j-i-1]=hoten[j];
}
int main(){
	cautruc1 sv[1000];
	int i=0;
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
	printf("%d\n",i);
	printf("%d",sv[0].diemtin.ck);
	printf("%s",sv[0].ten);
}
