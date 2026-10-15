#include <stdio.h>

int main() {
    int a;
    int b;
    float result;

    scanf("%d %d", &a, &b);

    result = ((float) b / (float) a) * 100;

    printf("%.4f%%\n", result);

    return 0;
}