#include<stdio.h>
int main() {
	int f[100],i,n;
	do {
	f[1]=f[2]=1;
	i=3;
	scanf("%d",&n);
	for (i=3;i<=n;i++) f[i]=f[i-1]+f[i-2];
	printf("f(%d) = %d\n",n,f[n]);
	} while (n!=0);
}
	
