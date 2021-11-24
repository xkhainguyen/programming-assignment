#include<stdio.h>
#include<conio.h>
#include<math.h>
int CP(int);
int main() {
	int A[20],n,i;
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%d",&A[i]);
	for (i=0;i<n;i++) if (CP(A[i])) printf("\n %d",A[i]);
}
int CP(int x) {
	if (sqrt(x)==floor(sqrt(x))) return 1;
	else return 0;
}
