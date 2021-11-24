#include<stdio.h>
#include<math.h>
int main() {
	double e,pi,a; int i,sgn;
	scanf("%lf",&e);
	pi=0; a=1; i=1; sgn=1;
	while (fabs(a)>e) {
		pi=pi+a*sgn;
		a=1.0/(2*i+++1);
		sgn=-sgn;
	}
	printf("pi = %.12f",pi*4);
}
