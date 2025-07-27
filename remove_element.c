// to remove all the occurences of a given element from an array

#include <stdio.h>

int removeElement(int arr[], int size, int ele){
    int i = 0;
    for (int j = 0; j < size; j++){
        if (arr[j] != ele){
            arr[i] = arr[j];
            i++;
        }
    }
    return i;
}

int main(){
    int arr[1000], size, ele;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to remove: ");
    scanf("%d", &ele);
    
    size = removeElement(arr, size, ele);
    
    printf("Array after removing %d: ", ele);
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}