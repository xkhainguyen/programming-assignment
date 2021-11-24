#include <stdio.h>
#include <conio.h>
int main()
{
  float x;
  int a ;
  char s[30] ;
  printf("\n x= ");
  scanf("%f",&x);
  fflush(stdin);
  printf("\n s= ");
  gets(s) ;
  printf("\n a= ");
  scanf("%d",&a);
  printf(" x=  %6.2f  \na = %d  \ns= %s",x,a,s);
}

