#include <stdio.h>

int main() {
    char blocks[3];
    scanf("%c %c %c", &blocks[0], &blocks[1], &blocks[2]);

    int idx[3] = {1, 2, 3};

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (blocks[i] > blocks[j]) {
                char tempChar = blocks[i];
                blocks[i] = blocks[j];
                blocks[j] = tempChar;

                int tempIdx = idx[i];
                idx[i] = idx[j];
                idx[j] = tempIdx;
            }
        }
    }

    printf("%d %d %d\n", idx[0], idx[1], idx[2]);

    return 0;
}