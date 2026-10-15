#include <stdio.h>
#include <string.h>

int main(void) {
	int baseInt;
	int headInt;
	int numberOfBaseInt = 3;
	int numberOfHeadInt = 0;
	int counter;
	int counter1;
	
	scanf("%d %d", &baseInt, &headInt);
	
	char baseChar = baseInt + '0';
	char headChar = headInt + '0';
	char spaceChar = ' ';
	char result[100];
	
	for (int i = 0; i < 7; i++) {
		if (i >= 4) {
			numberOfHeadInt -= 1;
		} else {
			numberOfHeadInt += 1;
		}

		counter = numberOfBaseInt + numberOfHeadInt;

		for (int j = 0; j < numberOfBaseInt; j++) {
			if (i >= 2 && i <= 4) {
				result[j] = baseChar;
			} else {
				result[j] = ' ';
			}
		};

		for (int j = 3; j < numberOfHeadInt + 3; j++) {
			result[j] = headChar;
		}; 

		result[counter] = '\0';
	
		printf("%s\n", result);

	}

   	return 0;
}
