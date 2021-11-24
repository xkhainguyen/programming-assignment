#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct{
	char hten[30];
	char lop[5];
	int diem;
}sv[20],temp;
void bosung();
void sx1();
void sx2();
FILE *f;
char tentep[]="danhsachhocsinh.dat";
int n=0,i,j;
int main(){
	do{
		printf("\nNhap vao so n (5<=n<=20) : "); scanf("%d",&n);
	}while(n<5||n>20);
	bosung();
	printf("\n    Danh sach sinh vien vua nhap");
	for(i=0;i<n;i++) printf("\n%-30s%-5s%5d",sv[i].hten,sv[i].lop,sv[i].diem);
	getch();
	system("cls");
	printf("\nNhap vao diem can sort: ");scanf("%d",&j);
	for(i=0;i<n;i++) if(sv[i].diem<j) printf("\n%-30s%-5s%5d",sv[i].hten,sv[i].lop,sv[i].diem);
	getch();
	system("cls");
	sx1();
	for(i=0;i<n;i++) printf("\n%-30s%-5s%5d",sv[i].hten,sv[i].lop,sv[i].diem);
	getch();
	system("cls");
	sx2();
	for(i=0;i<n;i++) printf("\n%-30s%-5s%5d",sv[i].hten,sv[i].lop,sv[i].diem);
	getch();
	system("cls");
	f=fopen(tentep,"wb");
	if(f) fwrite(sv,sizeof(temp),n,f);
	fclose(f);
}
void bosung(){
	for(i=0;i<n;i++){
		printf("\nNhap ho va ten cua sinh vien thu %d: ",i+1); fflush(stdin); gets(sv[i].hten);
		printf("\nNhap lop sinh vien:"); fflush(stdin); gets(sv[i].lop);
		printf("\nNhap diem thi tin dai cuong:"); scanf("%d",&sv[i].diem);
	}
}
void sx1(){
	int max;
	for(i=0;i<n-1;i++){
		max=i;
		for(j=i+1;j<n;j++) if(sv[max].diem<sv[j].diem) max=j;
		if(max!=i){ temp=sv[max];sv[max]=sv[i];sv[i]=temp;
		}
	}
}
int vitri(char *s){
	int l=strlen(s);
	while(s[l]!=' '&&l>-1) l--;
	return l+1;
}
void sx2(){
	int k;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++)
		if(strcmp(sv[k].hten+vitri(sv[k].hten),sv[j].hten+vitri(sv[j].hten))>0)
			k=j;
		else if(strcmp(sv[k].hten+vitri(sv[k].hten),sv[j].hten+vitri(sv[j].hten))==0)
			if(strcmp(sv[k].hten,sv[j].hten)>0) k=j;
		if(k!=i){
			temp=sv[i];
			sv[i]=sv[k];
			sv[k]=temp;
		}
	}
}

