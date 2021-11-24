#include<stdio.h>
int main() {
	int a[10][10];
	int s=0,r,c,i,j;
	printf("\n Nhap hang, cot: "); scanf("%d %d",&r,&c);
	for (i=0;i<r;i++) 
		for (j=0;j<c;j++) { printf("\n a[%d][%d] = ",i,j); scanf("%d",&a[i][j]);
		}
	for (i=0;i<r;i++) {
		for (j=0;j<c;j++) printf("%d ",a[i][j]);
		printf("\n");
		}
	for (i=0;i<r;i++) 
		if ((i==0)||(i==r-1)) for (j=0;j<c;j++) s=s+a[i][j];
		else s=s+a[i][0]+a[i][c-1];
	printf("Tong bien = %d",s);
	if (r==c) {
	for (i=1;i<r-1;i++) s=s+a[i][i];
	for (i=1;i<r-1;i++) s=s+a[i][r-1-i];
	if (r%2==1) s=s-a[(r-1)/2][(r-1)/2];
	printf("Tong = %d",s);
	}
}
