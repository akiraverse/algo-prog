#include <stdio.h>

int main() {
	int point = 100;
	int bonus = 50;
	long long result = 0;
    	long long N;

	scanf("%lld", &N);

	if (N >= 1 && N <= 1000000) {
		result = (N * point) + ((bonus / 2) * (N) * (N - 1));
	};
	
	printf("%lld\n", result);

	return 0;
}