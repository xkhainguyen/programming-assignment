#include<stdio.h>
#include<math.h>
int main() {
	int i,j;
	for (i=1;i<=100;i++) 
		for (j=i;j<=100;j++) if ((sqrt(i*i+j*j)==(int)sqrt(i*i+j*j))&&(sqrt(i*i+j*j)<=100)) printf("\n%d %d %.0f",i,j,sqrt(i*i+j*j)); 
}
