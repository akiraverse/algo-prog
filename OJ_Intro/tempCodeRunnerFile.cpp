#include <stdio.h>

int main() {
	int X;
	float Y;
	float result;

	scanf("%d %f", &X, &Y);

	if (X >= 1 && X <= 100000 && Y >= 0.00 && Y < 1000.00) {
		Y /= 100;

		for (int i = 0; i < 3; i++) {
			result = X + (X * Y);
			X = result;
		};
	}

	printf("%.2f\n", result);
    
	return 0;
}