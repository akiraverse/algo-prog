#include <stdio.h>
#include <string.h>

char* looping(int N, char C) {
	static char result[100];
	for (int i = 0; i < N; i++) {
		result[i] = C;
	}
	result[N] = '\0';
	return result; 
}

int main() {
	int T, A, B, C, D, E, F;
	int counter = 0;
	int innerCounter = 0;
	char *str;

	scanf("%d", &T);

	char final[T][600];

	while (counter < T) {
		char result[600] = "";
		innerCounter = 0;
		int offset = 0;
		scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);

		strcat(result, looping(A, 'a'));	
		strcat(result, looping(B, 's'));
		strcat(result, looping(C, 'h'));
		strcat(result, looping(D, 'i'));
		strcat(result, looping(E, 'a'));
		strcat(result, looping(F, 'p'));

		strcpy(final[counter], result);
		counter += 1;
	}

	for (int i = 0; i < T; i++) {
		printf("Case #%d: %s\n", i+1, final[i]);
	}

	return 0;
}

