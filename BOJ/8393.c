#include <stdio.h>
int main() {
	int a,n;
	scanf("%d", &n);
	a=0;
	for(int i=1;i<=n;i++){
		a=a+i;
	}
	printf("%d",a);
}
