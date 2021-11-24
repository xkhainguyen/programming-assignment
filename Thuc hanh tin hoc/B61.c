#include<stdio.h>
#include<math.h>
double f(float, int);
int main() {
	printf("%.4lf",f(4,3));
}
double f(float x, int y) {
	if (y<0) return -1;
	else if (y==0) return 1;
	else return f(x,y-1)*x;
}
