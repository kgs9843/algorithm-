#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d %d", &a, &b);
	if(a>b)printf(">");
	if(a<b)printf("<");
	if(a==b)printf("==");
	return 0;
}