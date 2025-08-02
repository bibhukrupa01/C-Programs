// // QuickSort algorithm in C
// #include <stdio.h>

// void quickSort(int arr[], int first, int last){
//     int temp;
//     int pivot = arr[first]; // First element as pivot
//     if (first < last){
//         int i = first;
//         int j = last;

//         while (i < j){
//             while (arr[i] <= pivot){
//                 i++;
//             }
//             while (arr[j] > pivot){
//                 j--;
//             }
//             if (i < j){
//                 temp = arr[i]; // swapping elements
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//         temp = arr[first]; //swapping with pivot when i is greater than j
//         arr[first] = arr[j];
//         arr[j] = temp;
//         quickSort(arr, first, j-1);
//         quickSort(arr, j+1, last);
//     }
// }

// int main(){
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array:\n");
//     for(int i = 0; i < n; i++){
//         printf("arr[%d]: ",i);
//         scanf("%d", &arr[i]);
//     }
//     quickSort(arr, 0, n-1);
//     printf("Sorted array is:\n");
//     for(int i = 0; i < n; i++){
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }


//Quicksort (taking last element as pivot)

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int A[], int p, int r)
{
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (A[j] <= x)
        {
            i++;
            swap(&A[i], &A[j]);
        }
    }

    swap(&A[i + 1], &A[r]);
    return i + 1;
}

void QuickSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = Partition(A, p, r);
        QuickSort(A, p, q-1);
        QuickSort(A, q+1, r);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &A[i]);
    }
    
    QuickSort(A, 0, n - 1);
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
}