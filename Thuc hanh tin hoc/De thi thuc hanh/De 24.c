#include<stdio.h>
#include<string.h>
int main() {
	char s[] = "nguyen le sai";
	char *w[5];
	int i = 0, j = 0, k = 0, p[5];
	puts(s);
	for (i = 0; i < strlen(s); i++) if (s[i] == ' ') p[j++] = i;
	for (i = 0; i < j; i++) printf("%d", p[i]);

		
}
