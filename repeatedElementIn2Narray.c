#include <stdio.h>

// Assumption: input numbers are non-negative and not too large.
#define MAX_VAL 10000  

int repeatedNTimes(int nums[], int size) {
    int seen[MAX_VAL] = {0};  // initialize all to 0
    
    for (int i = 0; i < size; i++) {
        if (seen[nums[i]]) {
            return nums[i];  // already seen → repeated element
        }
        seen[nums[i]] = 1;   // mark as seen
    }
    
    return 0; // should never happen if input is valid
}

int main() {
    int nums[] = {5, 1, 5, 2, 5, 3, 5, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = repeatedNTimes(nums, size);
    printf("Repeated element: %d\n", result);

    return 0;
}
