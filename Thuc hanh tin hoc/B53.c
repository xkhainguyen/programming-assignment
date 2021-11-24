#include<stdio.h>
int main() {
	float x,y,a[2][2],c[2];
	int i,j;
	for (i=0;i<2;i++) 
		for (j=0;j<2;j++) {
			printf("\n a[%d][%d] = ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	for (i=0;i<2;i++) {
		printf("\n c[%d] = ",i+1);
		scanf("%f",&c[i]);
	}
	x=(a[1][1]*c[0]-a[0][1]*c[1])/(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
	y=(c[0]-a[0][0]*x)/a[0][1];
	printf("\n x,y = %.2f, %.2f",x,y);
}
