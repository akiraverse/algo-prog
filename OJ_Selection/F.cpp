#include <stdio.h> 
#include <string.h>
#include <math.h>

int main() {
	int T;
	char space = ' ';
	char star = '*';
	char newLine = '\n';

	scanf("%d", &T);

	int X[T];
	for (int i = 0; i < T; i++) {
		scanf("%d", &X[i]);
	}

	for (int i = 0; i < T; i++) {
		int counter = X[i] - 1;
		int widthSize = 2 * X[i] - 1;
		int offset = 0;
		char output[(int) widthSize * X[i] + X[i] * 2];

		for (int j = 1; j <= X[i]; j++) {
			int numStar = 2 * j - 1;
			
			memset(output+offset, space, counter);
			offset += counter;
			memset(output+offset, star, numStar);
			offset += numStar;
			memset(output+offset, newLine, 1);
			offset += 1;

			counter -= 1;
		}

		output[offset] = '\0';
		printf("%s", output);
	}

	return 0;
}
