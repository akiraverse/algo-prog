#include <stdio.h>
#include <math.h>

int main() {
	double X, Y;

	scanf("%lf %lf", &X, &Y);

	if (X >= 1 && X <= 100000 && Y >= 0.00 && Y <= 1000.00) {
		double rate = Y / 100.00;

		double total = X * pow(1.00 + rate, 3.00);

		printf("%.2lf\n", total);
	}
    
	return 0;
}