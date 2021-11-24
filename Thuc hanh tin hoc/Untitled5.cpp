#include <stdio.h>
#include <conio.h>
#include <math.h>
 main()
 {float a,b,c,delta;
  printf("Nhap vao 3 so thuc:");
  printf("\n a=");scanf("%f",&a);
  printf("\n b=");scanf("%f",&b);
  printf("\n c=");scanf("%f",&c);
  if(a<0) {a=-a;b=-b;c=-c;}
  if(a==0) {if(b==0&&c==0) printf("\n Pt vo so nghiem.");
            if(b==0&&c!=0) printf("\n Pt vo nghiem.");
            if(b!=0) printf("\n Pt co nghiem x=%f .",-c/b);}
  else {delta=b*b-4*a*c;
        if(delta==0) printf("\n Pt co nghiem kep x=%f .",-b/2/a);
        if(delta>0) printf("\n Pt co 2 nghiem thuc phan biet: \n x1=%f \n x2=%f .",(-b+sqrt(delta))/2/a,(-b-sqrt(delta))/2/a);
        if(delta<0) printf("\n Pt co 2 nghiem phuc: \n x1=%f+%fi \n x2=%f-%fi .",-b/2/a,sqrt(-delta)/2/a,-b/2/a,sqrt(-delta)/2/a);}
getch();
}
