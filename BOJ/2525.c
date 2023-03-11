#include <stdio.h>
int main() {
	int H,M,c;
	scanf("%d %d", &H, &M);
	scanf("%d", &c);
	M = M + c;
	if (M< 60) {
		printf("%d %d", H, M);
	}
	else {
		H = H + (M/60);
		if (H > 23) {
			H = H-24;
			printf("%d %d", H, M%60);
		}
		else {
			printf("%d %d", H, M%60);
		}
	}
	return 0;
}
