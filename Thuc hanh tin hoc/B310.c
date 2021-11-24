#include<stdio.h>
int main() {
	int n, i, j, s1[20], s2[20];
	n=10;
	for (i=0;i<=n;i++) s1[i]=0;
	s1[0]=1; s1[1]=1;
	for (j=1;j<=n+2;j++) printf("  ");
	printf(" %d \n",s1[0]);
	for (i=2;i<=n;i++) {
		for (j=1;j<=n+1-i;j++) printf("  ");
		for (j=0;j<=i;j++) {
		s2[j]=s1[j]+s1[j-1];
 		}
 		for (j=0;j<=i;j++) {
		s1[j]=s2[j];
		printf("%4d",s2[j]);
		}
	printf("\n")
	}
}
