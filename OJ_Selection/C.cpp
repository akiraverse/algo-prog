#include <stdio.h>
#include <string.h>

int main() {
	int T;
	char star = '*';
	char space = ' ';

	scanf("%d", &T);

	int N[T];

	for (int i = 0; i < T; i++) {
		scanf("%d", &N[i]);
	}

	for (int i = 0; i < T; i++) {
		for (int j = 0; j < N[i]; j++) {
			char result[N[i]+1];

			memset(result, space, N[i]);

			if (j == 0 || j == N[i] - 1) {
				memset(result, star, N[i]);
			} else {
				int numStartStar = 1 + (j - 1);
				int numEndStar = N[i] - j - 1;
				result[0] = star;
				result[N[i] - 1] = star;
				result[numStartStar] = star;
				result[numEndStar] = star;
			}

			result[N[i]] = '\0';

			printf("%s\n", result);
		}

		printf("\n");
	}

	return 0;
}
