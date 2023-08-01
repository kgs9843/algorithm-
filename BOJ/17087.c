#include<stdio.h>
#define MAX 100001

int child[MAX] = { 0 };

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		gcd(b, a % b);
	}
}


int main(void) {
	int N, S,v;
	scanf("%d", &N);//동생의 명수
	scanf("%d", &S);//현재 위치
	for (int i = 0; i < N; i++) {
		scanf("%d", &v);
		if (S - v > 0) {
			child[i] = S - v;
		}
		else {
			child[i] = v - S;
		}
	}
	int answer = child[0];
	for (int i = 1; child[i] != NULL; i++) {
		answer = gcd(answer, child[i]);
	}
	printf("%d", answer);
}
