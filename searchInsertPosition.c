// to search the insert position in an array
#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int start = 0;
    int end = numsSize - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;  // avoid overflow
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return start;
}

// Example usage
int main() {
    int nums[] = {1, 3, 5, 6};
    int target = 5;
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = searchInsert(nums, size, target);
    printf("Insert position: %d\n", result);

    return 0;
}
