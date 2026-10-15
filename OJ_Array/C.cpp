#include <stdio.h>

int main(void) {
	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int size;
		// int arr3[size][size];
		scanf("%d", &size);


		int arr1[size][size];
		int arr2[size][size];
		int arrFinal[size][size];

		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				scanf("%d", &arr1[j][k]);
			}
		}

		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				scanf("%d", &arr2[j][k]);
			}
		}

		printf("\n");helo there

		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				for (int l = 0; l < size; l++) {
					// 0 1 2
					int fin = arr1[l][j * (size)] * arr2[k][j * (size)];
					printf("%d %d %d\n", arr1[l][j * (size)], arr2[k][j * (size)], fin);
				}
			}
		}

		// for (int j = 0; j < size; j++) {
		// 	for (int k = 0; k < size; k++) {
		// 		printf("final %d", arrFinal[j][k]);
		// 	}
		// 	printf("\n");
		// }
		
	}

	return 0;
}