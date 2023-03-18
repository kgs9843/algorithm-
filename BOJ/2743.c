#include <stdio.h>
int main() {
	char s[101];
	scanf("%s", s);
	int i = 0;
	while ((int)'a' <= (int)s[i] && (int)'z' >= (int)s[i]|| (int)'A' <= (int)s[i] && (int)'Z' >= (int)s[i])i++;
	printf("%d", i);

	return 0;
}

