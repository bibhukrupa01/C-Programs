// To find the max and min within an array using divide and coqueror approach

#include <stdio.h>
#include <math.h>

int globalMin = 0, globalMax = 0;

void findMinMax(int arr[], int lb, int ub){
   
    int LeftMin, LeftMax;
            int RightMin, RightMax;

    if (lb == ub){
        globalMin = arr[lb];
        globalMax = arr[lb];
    }
    else if(ub == lb+1){
        if (arr[lb] > arr[ub]){
            globalMax = arr[lb];
            globalMin = arr[ub];
        }
        else{
            globalMax = arr[ub];
            globalMin = arr[lb];
        }
    }
        else {
            int mid = floor((lb + ub) / 2);
            findMinMax(arr , lb , mid); // left  array
            int LeftMin = globalMin;
            int LeftMax = globalMax;

            findMinMax(arr, mid + 1, ub); //right array
            RightMin = globalMin;
            RightMax = globalMax;
        
        if (LeftMin < RightMin){
            globalMin = LeftMin;
            
        }
        else{
            globalMin = RightMin;
        }
        if (LeftMax > RightMax){
            globalMax = LeftMax;
        }
        else{
            globalMax = RightMax;
        }
    }

}

int main(){
    int n;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    int arr[10];
    printf("Enter the elemenets of the array: ");
    for (int i = 0; i < n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    findMinMax(arr, 0, n-1);
    printf("Minimun: %d \n", globalMin);
    printf("Maximum: %d", globalMax);
    return 0;
}

