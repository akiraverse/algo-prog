#include <stdio.h>

int main() {
	int A, B;
	float result;

	scanf("%d %d", &A, &B);

	if (B >= 1 && B <= 100000 && A >= 1 && A <= 100000 && B <= A) {
		result = (float) (A - B) / A * 100;
		printf("%.2f%%\n", result);
	}

	return 0;
}