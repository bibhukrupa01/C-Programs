// To find the difference between the product and the usm of a digit.

#include <stdio.h>

int subtractProductAndSum(int n) {
    int sum = 0;
    int product = 1;

    while (n > 0) {
        int digit = n % 10;   // extract last digit
        sum += digit;
        product *= digit;
        n /= 10;              // remove last digit
    }

    return product - sum;
}

int main() {
    int n = 234;
    int result = subtractProductAndSum(n);
    printf("Result: %d\n", result);
    return 0;
}
