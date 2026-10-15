#include <stdio.h>
#include <math.h>

int main() {
	int T;
	int i = 0;
	int A, B, C;

	scanf("%d", &T);

	int result[T];

	while (i < T) { 
		scanf("%d %d %d", &A, &B, &C);
		int chashback = ((A / 100) * B);
		result[i] = chashback > C ? C : chashback;
		i += 1;
	}

	for (i = 0; i < T; i++) {
		printf("Case #%d: %d\n", i + 1, result[i]);
	}

	return 0;
}
