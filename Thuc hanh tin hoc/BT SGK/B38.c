#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct{
	char ten[30];
	float tien;
	int nam;
}qg[50];
int n=0,i=0,j;
FILE *f;
char tentep[]="TAITRO.dat";
int main(){
	int N;
	float sum=0;
	char s[30];
	f=fopen(tentep,"ab");
	if(f){
	while(1){
		printf("\nNhap ten quoc gia: ");fflush(stdin);gets(qg[n].ten);
		if(strcmp(qg[n].ten,"$$$")==0) break;
		printf("\nNhap so tien tai tro: ");scanf("%f",&qg[n].tien);
		printf("\nNhap nam: ");scanf("%d",&qg[n].nam);
		n++;
	}
	fwrite(qg,sizeof(qg[0]),n,f);
	fclose(f);
	f=fopen(tentep,"rb");
	if(f){
		fseek(f,0,2);n=ftell(f)/sizeof(qg[0]);rewind(f);
		fread(qg,sizeof(qg[0]),n,f);
		printf("\nNhap vao nam (2000<=N<2008) : N =  ");scanf("%d",&N);
		for(i=0;i<n;i++) if(qg[i].nam==N)
		printf("\n%-30s%-6.2f",qg[i].ten,qg[i].tien);
		getch();
		system("cls");
		printf("\nNhap vao ten mot quoc gia: ");fflush(stdin);gets(s);
		for(i=0;i<n;i++) if(strcmp(qg[i].ten,s)==0) sum=sum+qg[i].tien;
		if(sum==0) printf("\nKHONG TIM THAY");
		else printf("%.2f",sum);
		fclose(f);
	}
	}
}
