#include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        int full = 0;
        int empty = n;

        while (empty >= 3) {
            int exchange = empty / 3;
            full += exchange;
            empty = exchange + (empty % 3);
        }

        if (empty== 2) {
            full++;
        }

        printf("%d\n", full);
    }

    return 0;
}