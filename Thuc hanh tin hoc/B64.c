#include<stdio.h>
#include<math.h>
int ifsnt(int);
int main() {
	printf("%d",ifsnt(-1));
}
int ifsnt(int n) {
	int i;
	if(n<=0) return -1;
	for(i=2;i<=sqrt(n);i++) 
		if(n%i==0) return 0;
	if(i>sqrt(n)) return 1;		
}
