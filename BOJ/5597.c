#include <stdio.h>
int main() {
	int student[31]={0}, i, a;
	for (i = 0; i < 28; i++){
		scanf("%d", &a);
		student[a-1] = 1;
	}
	for (i = 0; i < 30; i++) {
		if (student[i] == 0) {
			printf("%d\n", i + 1);
		}
	}
	return 0;
}
