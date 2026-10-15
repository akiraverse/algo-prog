#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int key;
    char value;
} DictEntry;

int main() {
	int n;
	int remainder;
	int counter = 0;
	int quotient;
	char result[100];
	char finalResult[100];

	char alphabets[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
						'a', 'b', 'c', 'd', 'e', 'f'};

	scanf("%d", &n);

	if (n == 0) {
		printf("0\n");
		return 0;
	}

	quotient = n;

	while (quotient > 0) {
		remainder = quotient % 16;
		quotient = quotient / 16;
		result[counter++] = alphabets[remainder];
	}

	for (int i = 0; i < counter; i++) {
		finalResult[i] = result[counter - 1 - i];
	}
	finalResult[counter] = '\0';

	printf("%s\n", finalResult);

	return 0;
}