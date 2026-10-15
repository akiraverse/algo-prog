#include <stdio.h>

int main() {
    int Ph;
    int M;
    int Pu;
    float result;

    scanf("%d %d %d", &Ph, &M, &Pu);

    result = Ph * 0.2 + M * 0.3 + Pu * 0.5;

    printf("%.2f\n", result);

    return 0;
}