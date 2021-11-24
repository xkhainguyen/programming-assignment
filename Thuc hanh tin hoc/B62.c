#include<stdio.h>
long gt(int);
int main() {
	printf("%d",gt(1));
}
long gt(int n) {
	if (n==0) return 1;
	else return gt(n-1)*n;
}
