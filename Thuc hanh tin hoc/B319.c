#include<stdio.h>
int main() {
	float f,a,e,b,x; 
	int  j;
	scanf("%f %f",&e,&x);
	f=1-3*x; a=x*x*x/(2*3*4); b=5; j=5;
	while (fabs(b*a)>e) {
		f=f+b*a;
		a=-a*x*x*x/(j*(j+1)*(j+2));
		j=j+3;
		b=b+2;
	}
	printf("f = %f",f);
}
