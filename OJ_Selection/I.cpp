#include <stdio.h> 

int gcd(int a, int b) {
	int remainder = a % b; 
	if (remainder == 0) {
		return b;
	}
	return gcd(b, remainder);
}

int main() {
	int T;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);

		int inputNums[N];
		for (int j = 0; j < N; j++) {
			scanf("%d", &inputNums[j]);
		} 

		int b, remainder;

		for (int j = 0; j < N - 1; j++) {
			int a = j == 0 ? inputNums[j] : remainder;
			int b = inputNums[j+1];

			int maxNum, minNum;

			if (a > b) {
				maxNum = b;
				minNum = a;
			} else {
				maxNum = a;
				minNum = b;
			}

			remainder = gcd(maxNum, minNum);
		}

		printf("Case #%d: %d\n", i+1, remainder);
	}
	
	return 0;
}
