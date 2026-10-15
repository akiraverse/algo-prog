#include <stdio.h>
// nama = input("nama: ")

int main() {
	char id[11];
	char name[101];
	char class[2];
	int num;

	scanf("%10[^\n]", id);
	scanf(" %100[^\n]", name);
	scanf(" %1[A-Z]", class);
	scanf(" %d", &num);

	printf("Id    : %s\n", id);
	printf("Name  : %s\n", name);
	printf("Class : %s\n", class);
	printf("Num   : %d\n", num);

	return 0;
}