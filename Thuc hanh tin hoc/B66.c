#include<stdio.h>
#include<math.h>
float s(float, float, float);
int main() {
	printf("%.4f",s(3,4,5));
}
float s(float a,float b, float c) {
	float p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));	
}
