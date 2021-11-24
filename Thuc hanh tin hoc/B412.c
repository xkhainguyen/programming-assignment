#include<stdio.h>
int main() {
	float a,tbc,max,min;
	int i=1;
	scanf("%f",&a);
	max=a;min=a;;tbc=a;
	do {
		scanf("%f",&a);
		if (a==0) break;
		tbc=tbc+a;
		i++;
		if (max<a) max=a;
		if (min>a) min=a;
	} while (a!=0);
	printf("\n max = %.2f",max);
	printf("\n min = %.2f",min);
	printf("\n tbc = %.2f",tbc/i);
}
