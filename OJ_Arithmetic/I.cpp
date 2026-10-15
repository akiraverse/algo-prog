#include <stdio.h>

int main() {
	int counter = 1;
	double result[4];

	while (counter <= 3) {
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);


		float final = 
		((float) a / 1.0 * 2.0) + 
		((float) b / 2.0 * 4.0) + 
		((float) c / 3.0 * 6.0) + 
		((float) d / 4.0 * 4.0);

		result[counter - 1] = final;

		counter += 1;
	}

	printf("%.2lf\n%.2lf\n%.2lf\n", result[0], result[1], result[2]);
	
}