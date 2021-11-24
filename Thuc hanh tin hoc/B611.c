#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int sum(int);
int main() {
	printf("%d",sum(121234));
}
int sum(int n) {
	int i;
	i=pow(10,floor(log10(n)));
	if(i==0) return n;
	else return sum(n%i)+n/i;
}

