#include<stdio.h>
int main() {
	int f1,f2,i,n;
	f1=f2=1;
	i=2;
	scanf("%d",&n);
	while (i<n) {
		f1=f1+f2;
		i++;
		if (i>n) break;
		f2=f2+f1;
		i++;
	}
	if (!(n%2)) printf("f(%d) = %d",n,f2); else printf("f(%d) = %d",n,f1);
}
