#include <stdio.h>
#include <stdlib.h>
int main() {
	float kq;
	char s[30];
	printf("\n Vao kq ");
	scanf("%f",&kq);
	fflush(stdin);
	printf("\n Vao ho ten : ");
	gets(s);
	printf("\n		Bang ket qua");
	printf("\n---------------------------------------------");
	printf("\n:	Ho va ten      : Ket qua : Xep loai :");
	printf("\n:----------------------:---------:----------:");
	if (kq>=9)
	printf("\n:%-22s:%8.2f : Xuat sac :",s,kq);
	else if (kq>=8)
	printf("\n:%-22s:%8.2f :     Gioi :",s,kq);
	else if (kq>=6)
	printf("\n:%-22s:%8.2f :      Kha :",s,kq);
	else 
	printf("\n:%-22s:%8.2f :       TB :",s,kq);
	printf("\n:----------------------:---------:----------:");
}
