#include<stdio.h>
long gtc(int);
int main() {
	printf("%d",gtc(4));
}
long gtc(int n) {
	if((n==0)||(n==1)) return 1;
	else return gtc(n-2)*n;
}
