#include<stdio.h>
#include<conio.h>
void in(int sl,char ch) {
	int i;
	for(i=1;i<=sl;i++) printf("%c",ch);
}
int main() {

	int n=8,a[8],i;
	char b[]="abcdefgh";
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++) {
		printf("Cua hang %d: ",i+1);
		in(a[i],b[i]);
		printf("\n");
	}

}
