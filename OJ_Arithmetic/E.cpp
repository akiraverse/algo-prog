#include <stdio.h>
#include <math.h>

int main() {
    	int N;
	
    	scanf("%d", &N);

	if (N >= 1 && N <= 50) {
		long long result = (pow(2, N - 1) - 1)+ pow(2, N - 1);
    		printf("%lld\n", result);
	}
}