// To check if a number is an ugly number
// An ugly number is a postive number whose prime factors only include 2, 3 and 5.

#include<stdio.h>

int is_ugly(int n){
    if (n <= 0){
        printf("Ugly numbers are always positive integers.");
    }
    int prime[] = {2, 3, 5};
    for (int i = 0; i < 3; i++){
        while (n % prime[i] == 0){
            n = n / prime[i];
        }
    }
    return n == 1;
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(is_ugly(number)){
        printf("%d is an ugly number.",number);
    }
    else{
        printf("%d is not an ugly number.", number);
    }
}
