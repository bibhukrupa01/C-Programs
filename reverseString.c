// C code to reverse a string

#include <stdio.h>
#include <string.h>

int reverseString(char str[], int start, int end){
    int temp;
    if (start >= end){
        return 0;
    }
    else{
        while (start < end){
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }
}

int main(){
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    reverseString(str, 0, strlen(str)-1);
    printf("Reversed string is: %s",str);
    return 0;
}