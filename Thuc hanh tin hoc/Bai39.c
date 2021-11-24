#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>
int main() {
	char s[]={'A', 'B', 'C', 'D'};
	int i,j,n,k;
	char ch;
	n=10;
	while(1) {
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++)
			if (j<=i) printf("  ");
			else printf("%c ", s[k%4]);
		for (j=n;j<=2*n;j++)
			if (j<=2*n-i) printf("  ");
			else printf("%c ", s[(k+1)%4]);
		printf("\n");
	}
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++) 
			if (j>=n-i+1) printf("  ");
			else printf("%c " ,s[(k+3)%4]);
		for (j=1;j<=i;j++) printf("%c ", s[(k+2)%4]);
		printf("\n");
	}
	k++;
	Sleep(100) ;
	system("cls");
	}
}
