#include<stdio.h>
int main() {
	int n,i,j,A[10];
	char S[10];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&A[i]);
	for(i=0;i<n;i++){
		for(j=2;j<A[i]-1;j++) if(!(A[i]%j)) break;
		if(j>A[i]-2) S[i]='T';
		else if(A[i]>0) S[i]='K';
		else S[i]='A';
	}
	puts(S);
}
