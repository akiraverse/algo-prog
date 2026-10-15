#include <stdio.h>

int main() {
	int x, y, k;
	int counter = 0;

	scanf("%d %d %d", &x, &y, &k);

	if (x > y) {
		printf("%d\n", -1);
		return 0;
	}

	while (x != y) {
		counter += 1;

		x++;
		y--;

		// one conditon met and the other is not (XOR) 
		if ((x == k) != (y == k)) {
			break;
		}
	}

	if (x == y && x == k && y == x) {
		printf("%d\n", counter);
	} else {
		printf("%d\n", -1);
	}
	
	return 0;
}
