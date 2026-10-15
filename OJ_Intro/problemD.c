#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	int quotient;
	int remainder;
	char temp[100];
	char result[100];
	int counter = 0;

	scanf("%d", &number);

	quotient = number;

	if (quotient == 0) {
		printf("%d", 0);
		return 0;
	}

	while (quotient > 0) {
		remainder = quotient % 8;
		quotient = quotient / 8; 
		
		temp[counter] = remainder + '0'; 
		counter += 1;
	};

	for (int i = 0; i < counter; i++) {
		result[i] = temp[counter - 1 - i];
	};

	printf("%d\n", atoi(result));

	return 0;
}