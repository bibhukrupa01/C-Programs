// binary search using recursion in c
#include<stdio.h>

int binarySearch(int arr[], int beg, int end, int e);

int main(){
    int n, e;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements(in sorted array): \n");
    for (int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements to be searched: ");
    scanf("%d",&e);

    int result = binarySearch(arr, 0, n-1, e);
    if(result != -1){
        printf("Element found at index %d", result);
    }
    else{
        printf("Element not found in the array.");
    }
}

int binarySearch(int arr[], int beg, int end, int e){
    if (beg > end){
        return -1;
    }
    int mid = beg + (end - beg)/2;

    if (arr[mid] == e){
        return mid;
    }
    else if (arr[mid] < e){
        return binarySearch(arr, mid + 1, end, e);
    }
    else{
        return binarySearch(arr, beg, mid - 1, e);
    }
}