// checking if a number is palindrome without converting to strings

#include<stdio.h>

int is_palindrome(int n){

    if (n < 0){
        printf("Negative numbers cannot be palindrome.");
    }
    int original = n;
    int reverse_num = 0;

    while(n > 0){
        int digit = n % 10;
        reverse_num = reverse_num * 10 + digit;
        n = n / 10;
    }
    return original == reverse_num;
}

int main(){
    int number;
    printf("Enter a number:- ");
    scanf("%d", &number);

    if (is_palindrome(number)){
        printf("%d is a palindrome.", number);
    }
    else{
        printf("%d is not a palindrome.", number);
    }
}
