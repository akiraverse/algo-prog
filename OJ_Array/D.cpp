#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);

	int arrNums[N];
	int arrIndices[N];

	for (int i = 0; i < N; i++) {
		scanf("%d", &arrIndices[i]);
	}

	for (int i = 0; i < N; i++) {
		int num;
		scanf("%d", &num);
		arrNums[arrIndices[i]] = num;
	}

	for (int i = 0; i < N; i++) {
		printf("%d", arrNums[i]);
		if (i == N - 1) {
			continue;
		}
		printf(" ");
	}

	printf("\n");

	return 0;
}