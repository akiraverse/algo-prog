#include <stdio.h>

int main() {
	int A;
	int B;

	scanf("%d %d", &A, &B);

	if (A >= 1 && A <= 1000 && B >= 1 && B <= 1000) {
		printf("%d\n%d\n%d\n%d\n%d\n", A+B, A-B, A*B, A/B, A%B);
	}

    	return 0;
}