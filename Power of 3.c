#include <stdio.h>
#include <stdbool.h>

bool isPowerOfThree(int n) {
    if (n == 0) {
        return false;
    }
    while (n > 0) {
        if (n == 1) {
            return true;
        }
        if (n % 3 != 0) {
            break;
        }
        n = n / 3; // Integer division in C
    }
    return false;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfThree(num)) {
        printf("%d is a power of 3.\n", num);
    } else {
        printf("%d is not a power of 3.\n", num);
    }

    return 0;
}
