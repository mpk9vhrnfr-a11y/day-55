#include <stdio.h>

int main(void) {
    int n, i, pivot = -1, sum1 = 0, sum2;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    sum2 = n * (n + 1) / 2;

    for(i = 1; i <= n; i++) {
        sum1 += i;
        if(sum1 == sum2 - sum1 + i) {
            pivot = i;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}

