// QuickSort algorithm in C
#include <stdio.h>

void quickSort(int arr[], int first, int last){
    int temp;
    int pivot = arr[first]; // First element as pivot
    if (first < last){
        int i = first;
        int j = last;

        while (i < j){
            while (arr[i] <= pivot){
                i++;
            }
            while (arr[j] > pivot){
                j--;
            }
            if (i < j){
                temp = arr[i]; // swapping elements
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[first]; //swapping with pivot when i is greater than j
        arr[first] = arr[j];
        arr[j] = temp;
        quickSort(arr, first, j-1);
        quickSort(arr, j+1, last);
    }
}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++){
        printf("arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, n-1);
    printf("Sorted array is:\n");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}
