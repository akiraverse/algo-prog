#include <stdio.h>

int main() {
	char w1[21], w2[21], w3[21];
	
	if (scanf("%20s %20s %20s", w1, w2, w3) == 3) {
     	printf("%s %s %s\n", w3, w2, w1);
   	}

	return 0;
}