#include<stdio.h>
int UCLN(int a,int b){
	if(b==0) return a;
	else UCLN(b,a%b);
}
int BCNN(int a,int b){
	int i=1;
	while(i*a%b){
		i++;
	}
	return i*a;
}
int main(){
	printf("%d	%d",UCLN(3,6),BCNN(2,5));
}
