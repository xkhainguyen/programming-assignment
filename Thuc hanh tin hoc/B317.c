#include<stdio.h>
#include<math.h>
int main() {
	float a,b,c,x1,x2,d;
	scanf("%f %f %f",&a,&b,&c);
	if (a==0) 
		if (b==0)
			if (c!=0) printf("\n PT vo nghiem");
			else printf("\n PT vo so nghiem");
		else printf("\n PT co nghiem x = %.4f",-c/b);
	else {
		d=b*b-4*a*c;
		if (d>0) printf("\n PT co nghiem x1 = %.4f ; x2 = %.4f ",(-b-sqrt(d))/(2*a),(-b+sqrt(d))/(2*a));
		else if (d==0) printf("\n PT co nghiem x1 = x2 = %.4f ",-b/(2*a));
		else printf("\n PT vo nghiem");
	
	}
}
