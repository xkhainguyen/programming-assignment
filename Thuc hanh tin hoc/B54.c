#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() {
	char dslop[10][30], temp[30];
	int n,i,j;
	scanf("%d",&n);
	fflush(stdin);
	for (i=0;i<n;i++) gets(dslop[i]);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++) if (strcmp(dslop[i],dslop[j])<0) { 
			strcpy(temp,dslop[i]);
			strcpy(dslop[i],dslop[j]);
			strcpy(dslop[j],temp);
		}
	printf("\n DS LOP:");
	for (i=0;i<n;i++) printf("\n %d. %-s",i+1,dslop[i]);
}
