#include<stdio.h>
#include<math.h>
long gt(int n) {
	if (n==0) return 1;
	else return gt(n-1)*n;
}
int main() {
	int n,k;
	scanf("%d %d",&k,&n);
	printf("\n C(%d,%d) = %d",k,n,gt(n)/(gt(k)*gt(n-k)));
}
