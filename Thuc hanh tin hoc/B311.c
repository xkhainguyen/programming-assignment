#include<stdio.h>
#include<math.h>
int main() {
	float s,a,x,e; 
	int i;
	x=3;
	scanf("%f",&e);
	i=2;a=x;s=0;
	while (fabs(a)>e) {
		s=s+a;
		a=-a*x*x/((i)*(i+1));
		i++;
	}
	printf("s = %.12f",s);
	printf("\ns = %.12f",sin(x));
}
