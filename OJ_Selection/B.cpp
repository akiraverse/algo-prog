#include <stdio.h>
#include <math.h>

int main() {
	int T;

	scanf("%d", &T);

	int N[T], X[T];

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &N[i], &X[i]);
	}

	for (int i = 0; i < T; i++) {
		// check apakah lebih dekat dari page 1 atau page terakhir

		int exp1 = X[i] - 1;
		int exp2 = N[i] - X[i];
		int result = 0;

		if (X[i] == N[i]) {
			printf("Case #%d: %d\n", i+1, result);
			continue;
		}

		if (exp2 < exp1 || exp2 == exp1) {
			if (N[i] % 2 == 1) N[i] -= 1;
			int integer = (N[i] - X[i]) / 2;
			int remainder = (N[i] - X[i]) % 2;
			result = integer + remainder;
			printf("Case #%d: %d\n", i+1, result);
		} else if (exp2 > exp1) {
			N[i] -= 1;
			result = X[i] % 2 == 0 ? X[i] / 2 : (X[i] - 1) / 2;
			printf("Case #%d: %d\n", i+1, result);
		}
	}

	return 0;
}
