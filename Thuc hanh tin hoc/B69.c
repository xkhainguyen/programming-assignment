#include<stdio.h>
#include<math.h>
float max(float a[100]);
int main() {
	float a[4]={4,2,3,1};
	printf("%f",max(a));
}
float max(float a[100]) {
	int i;
	float max;
	max=a[0];
	for(i=1;i<4;i++) if(max<a[i]) max=a[i];
	return max;		
}
