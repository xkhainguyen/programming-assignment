#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int ptb2(float a,float b,float c,float *x1,float *x2){
	float delta;
	if(a==0) 
		if(b==0) 
			if(c==0) return 3;
			else return 0;
		else{*x1=-c/b;return 1;
		}
	else{
		delta=b*b-4*a*c;
		if(delta<0) return 0;
		else if(delta==0){*x1=-c/b; return 1; 
		}
		else{*x1=(-b-sqrt(delta))/2/a;*x2=(-b+sqrt(delta))/2/a; return 2; 
		}
	}
}
int main(){
	float x1,x2;
	ptb2(1.,-4.,1.,&x1,&x2);
	printf("\n%d",ptb2(1.,-4.,1.,&x1,&x2));
	printf("\n%.2f	%.2f",x1,x2);
}
