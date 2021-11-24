#include<stdio.h>
int main() {
	int n,s;
	scanf("%d", &n);
	s=(n/100)+(n%100)/10+((n%100)%10);
	printf("tong cac chu so = %d",s);
}
