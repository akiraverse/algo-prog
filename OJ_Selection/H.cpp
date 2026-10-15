#include <stdio.h> 

int main() {
	int T;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int A, B;
		int tot = 0;
		int remainder, quotient;

		scanf("%d %d", &A, &B);

		tot += A;

		do {
			quotient = A / B;
			remainder = A % B;
			A = quotient + remainder;
			tot += quotient;
		} while (A >= B);

		printf("Case #%d: %d\n", i+1, tot);
	}
	
	return 0;
}
