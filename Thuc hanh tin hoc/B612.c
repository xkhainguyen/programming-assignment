#include<stdio.h>
#include<string.h>
int n;
int *f(int x,int a[20]);
int main() {
	int a[20], *p,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	p=f(9,a);
	for(i=0;i<n;i++) printf("%d",*(p+i));
}
int *f(int x,int a[20]) {
	int i,j;
	for(i=0;i<n;i++) if(a[i]%2==0) {
		n=n+1;
		for(j=n;j>i+1;j--) a[j]=a[j-1];
		a[i+1]=x;
	}
	return a;
}
