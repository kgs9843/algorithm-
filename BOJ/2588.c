#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d %d", &a, &b);
	c=(b/10)-((b/100)*10);
	printf("%d\n",a*(b%10));
	printf("%d\n",a*c);
	printf("%d\n",a*(b/100));
	printf("%d",a*b);
	return 0;
}
