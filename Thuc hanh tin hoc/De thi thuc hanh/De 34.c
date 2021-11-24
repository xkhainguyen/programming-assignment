#include<stdio.h>
int main() {
	int n,cs,count_odd=0,count_even=0;
	do{
		printf("Nhap vao so nguyen N>0: ");scanf("%d",&n);
	}while(n<=0);
	while(n!=0) {
		cs=n%10;
		if(cs%2) count_odd++;
		else count_even++;
		n=n/10;
	}
	if(count_odd==count_even) printf("\n La so can bang");
	else printf("\n Khong la so can bang");
}
