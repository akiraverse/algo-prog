#include <stdio.h>

int main() {
	int age;

	scanf("%d", &age);

	if (age >= 1 && age <= 100) {
		printf("Selamat ulang tahun yang ke %d yaaa!\n", age);
	}

	return 0;
}