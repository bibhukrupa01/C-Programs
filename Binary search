// Binary search algorithm in c using functions
#include <stdio.h>

void binarySearch(int arr[], int beg, int end, int e){
    int mid;
    while(beg<=end){
        mid=(beg+end)/2;
        if(arr[mid]==e){
            printf("Element found at index %d\n", mid);
            return;
        }
        else if(arr[mid]<e){
            beg = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    printf("Element not found in the array\n");
}

int main(){
    int n, e;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements (in sorted order): ");
    for(int i =0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&e);

    binarySearch(arr, 0, n-1, e);
}
