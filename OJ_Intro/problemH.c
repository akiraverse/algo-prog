#include <stdio.h>

int main() {
	char name[101];

	scanf("%100[^\n]", name);

	printf("Halo %s\n", name);

	return 0;
}