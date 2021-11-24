#include<stdio.h>
int ifshh(int);
int main() {
	printf("%d",ifshh(6));
}
int ifshh(int n) {
	int i,s=0;
	if(n<=0) return -1;
	for(i=1;i<n;i++) if(n%i==0) s=s+i;
	if(s==n) return 1;
	else return 0;
}
