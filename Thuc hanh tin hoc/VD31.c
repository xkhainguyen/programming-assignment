#include<stdio.h>
int main() 
{
	float ds;
	printf("\n Vao doanh so (tram trieu) = ");
	scanf("%f",&ds);
	printf("Tien thuong hau mai = %.0f\n",ds*(ds>1000?0.15:ds>800?0.1:ds>500?0.07:0));
	printf("Tien thuong hau mai = %.0f"(ds>1000)*ds*0.15+(ds>800&&ds<=1000)*ds*0.1+(ds>500&&ds<=800)*ds*0.07);
}
