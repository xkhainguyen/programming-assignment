#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int n=0;
char ten[10000][7], hten[10000][30], hlot[10000][30];
void tachten(char hten[], char ten[], char hlot[]) {
  	int i, j, k;
  	k = strlen(hten);
  	for (i = k - 1; i > 0; i--)
   		if (hten[i] == ' ')
		break;
	strncpy(hlot,hten,i+1);
   	hlot[i]='\0';
  	for (j = i + 1; j < k; j++)	ten[j - i - 1] = hten[j];
  	ten[k - i - 1] = '\0';
}
void bosung() {
	int i=n,j;
	printf("Nhap ten \n");
	do{
		fflush(stdin); gets(hten[i]);
		tachten(hten[i],ten[i],hlot[i]);
		i++;
	}while((i<10000)&&(hten[i-1][0]!='\0'));
	n=i-1;
}
void sapxep() {
	int i,j;
	char temp[30];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++) 
			if(strcmp(ten[i],ten[j])>0) {
		strcpy(temp,hten[j]); strcpy(hten[j],hten[i]); 	strcpy(hten[i],temp);
		strcpy(temp,ten[j]); 	strcpy(ten[j],ten[i]); 	strcpy(ten[i],temp);
		strcpy(temp,hlot[j]); 	strcpy(hlot[j],hlot[i]); 	strcpy(hlot[i],temp);
		} else if(strcmp(ten[i],ten[j])==0) if(strcmp(hlot[i],hlot[j])>0) {
			strcpy(temp,hten[j]); 	strcpy(hten[j],hten[i]); 	strcpy(hten[i],temp);
			strcpy(temp,ten[j]); 	strcpy(ten[j],ten[i]); 	strcpy(ten[i],temp);
			strcpy(temp,hlot[j]); 	strcpy(hlot[j],hlot[i]); 	strcpy(hlot[i],temp);
		}
}
void inds() {
	int i;
	printf("DS HOC SINH \n");
	for(i=0;i<n;i++) printf("%d. %s \n",i+1,hten[i]);
}
int main() {
	int a;
	do{
	system("cls");
	printf("1. Bo sung DS \n");
	printf("2. Sap xep DS \n");
	printf("3. In DS \n");
	fflush(stdin);
	scanf("%d",&a);
	switch(a) {
		case 1:
			system("cls");
			bosung();
			break;
		case 2:
			system("cls");
			sapxep();
			break;
		case 3:
			system("cls");
			inds();
			getch();
			break;
	}
	}while(1);
}
