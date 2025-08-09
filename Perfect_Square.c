// To find out if a number is perfect square or not
#include <stdio.h>
#include <stdbool.h>

bool isPerfectSquare(int num) {
    if (num < 1) {
        return true; // Matches your Python code behavior
    }

    int low = 1, high = num;
    while (low <= high) {
        long long mid = (low + high) / 2; // use long long to prevent overflow
        long long sq = mid * mid;

        if (sq == num) {
            return true;
        } else if (sq < num) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return false;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfectSquare(num)) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
