#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main() {
	int i,j,n,k;
	n=10;
		while(1) {
	for (i=1;i<=n-3;i++) {
		for (j=1;j<=i-1;j++) printf("  ");
		for (j=1;j<=4;j++) printf("* ");
		Sleep(5);
		system("cls");
	}
	for (k=1;k<=n-3;k++) {
		for (i=k;i<=k+3;i++) {
			for (j=1;j<=n-1;j++) printf("  ");
			printf("*\n");
		}
		Sleep(5);
		system("cls");
		for (j=1;j<=k;j++) printf("\n");
	}
	system("cls");
	
	for (i=1;i<=n-2;i++) {
		for (j=1;j<=n-1;j++) printf("\n");
		for (j=1;j<=n-i;j++) printf("  ");
		for (j=1;j<=4;j++) printf("* ");
		Sleep(5);
		system("cls");
	}
	for (k=1;k<=n-3;k++) {
		for (j=1;j<=n-3-k;j++) printf("\n");
		for (i=k;i<=k+3;i++) 
			printf("*\n");
		Sleep(5);
		system("cls");
	}
	}
}
