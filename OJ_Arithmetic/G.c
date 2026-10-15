#include <stdio.h>

int main() {
	int numA1, numA2;
	int numB1, numB2;
	int numC1, numC2;

	scanf("%d + %d =\n", &numA1, &numA2);
	scanf("%d + %d =\n", &numB1, &numB2);
	scanf("%d + %d =", &numC1, &numC2);

	printf("%d\n%d\n%d\n", numA1+numA2, numB1+numB2, numC1+numC2);

	return 0;
}