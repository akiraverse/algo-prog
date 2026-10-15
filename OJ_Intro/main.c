#include <stdio.h>

int main() {
    int absen;
    printf("Masukkan absen: "); // Added to prompt you cleanly in the terminal
    scanf("%d", &absen);

    if (absen % 2 == 0) {
	printf("absen genap %d\n", absen);
    } else if (absen % 2 == 1) {
	printf("absen ganjil %d\n", absen);
    }
    return 0;
}
