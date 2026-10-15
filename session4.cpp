#include <stdio.h>

int main(void) {
	for (int j = 1; j <= 5; j++) {
		for (int i = 1; i <= 5; i++) {
			if (j == 1 || j == 5) {
				printf("*");
			} else {
				if (i == 1 || i == 5) printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}